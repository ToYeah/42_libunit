#include "libunit.h"

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

t_unit_test	*exec_test_list(t_unit_test *list, int *res)
{
	t_unit_test	*target;

	target = list;
	while (target)
	{
		exec_test(target);
		*res += target->res;
		if (target->next == NULL)
			break ;
		else
			target = target->next;
	}
	return (target);
}
