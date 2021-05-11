#include "includes/libunit.h"

t_test_res	analyze_test_result(int status)
{
	int	sig;
	int	res;

	if (WIFSIGNALED(status))
	{
		sig = WTERMSIG(status);
		if (sig == SIGSEGV)
			return (RESSEGV);
		else if (sig == SIGBUS)
			return (RESBUS);
	}
	else if (WIFEXITED(status))
	{
		res = (int)(WEXITSTATUS(status));
		if (res == 0)
			return (RESOK);
		else if (res == 255)
			return (RESKO);
	}
	return (RESUNKNOWN);
}

void	exec_test(t_unit_test *test)
{
	int		status;
	int		test_result;
	pid_t	pid;

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

const char	*str_test_res(t_test_res res)
{
	if (res == RESOK)
		return ("OK");
	if (res == RESKO)
		return ("KO");
	if (res == RESSEGV)
		return ("SEGV");
	if (res == RESBUS)
		return ("BUS");
	return ("UNKNOWN");
}

int	launch_tests(t_unit_test **test)
{
	t_unit_test	*target;

	target = *test;
	while (target)
	{
		exec_test(target);
		printf("%s: %s\n", str_test_res(target->res), target->description);
		target = target->next;
	}
	delete_test_list(test);
	return (0);
}
