#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
#include "../includes/libunit.h"

int	error_func()
{
	return (-1);
}

int	good_func()
{
	return (0);
}

int segv_func()
{
	int *a;
	a = NULL;
	return (*a);
}

t_unit_test	*list_init()
{
	t_unit_test *list;

	list = NULL;
	load_test(&list, "Good Test", good_func);
	load_test(&list, "Bad Test", error_func);
	load_test(&list, "Segv Test", segv_func);
	return list;
} 

t_test_res analyze_test_result(int status)
{
	int sig;
	int res;

	if (WIFSIGNALED(status))
	{
		sig = WTERMSIG(status);
		if (sig == SIGSEGV)
			return RESSEGV;
		else if (sig == SIGBUS)
			return RESBUS;
	}
	else if (WIFEXITED(status))
	{
		res = (int)(WEXITSTATUS(status));
		if (res == 0)
			return RESOK;
		else if (res == 255)
			return RESKO;
	}
	return RESUNKNOWN;
}

void exec_test(t_unit_test* test)
{
	int status;
	int test_result;
	pid_t pid;

	pid = fork();
	if (pid < 0)
		error_exit();
	if (pid == 0)
	{
		test_result = test->func();
		exit(test_result);
	}
	wait(&status);
	test->res = analyze_test_result(status);
}

const char* str_test_res(t_test_res res)
{
	if (res == RESOK)
		return "OK";
	if (res == RESKO)
		return "KO";
	if (res == RESSEGV)
		return "SEGV";
	if (res == RESBUS)
		return "BUS";
	if (res == RESUNKNOWN)
		return "UNKNOWN";
}

size_t	my_strlen(const char *str)
{
	size_t res;

	res = 0;
	while(str[res])
		res++;
	return (res);
}


char	*my_strdup(const char *str)
{
	size_t len;
	char *res;

	len = my_strlen(str);
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return NULL;
	len = 0;
	while (str[len])
	{
		res[len] = str[len];
		len++;
	}
	return res;
}

int launch_tests(t_unit_test **test)
{
	t_unit_test *target;

	target = *test;
	while(target)
	{
		exec_test(target);
		printf("%s: %s\n",str_test_res(target->res), target->description);
		target = target->next;
	}
}

int	main()
{
	t_unit_test *list;

	list = list_init();
	launch_tests(&list);
}
