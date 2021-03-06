#include "libunit.h"

void	load_test(t_unit_test **list, const char *description, t_test_func f)
{
	t_unit_test	*test;

	if (list == NULL || description == NULL || f == NULL)
		error_exit();
	test = test_init(description, f);
	if (test == NULL)
		error_exit();
	test_add_front(list, test);
}

int	launch_tests(t_unit_test **test)
{
	t_unit_test	*target;
	int			test_count;
	int			success_count;

	test_count = 0;
	success_count = 0;
	if (test == NULL)
		error_exit();
	if (*test == NULL)
	{
		printf("KO: Test Not Found");
		return (-1);
	}
	target = *test;
	target = exec_test_list(*test, &test_count, &success_count);
	target = print_test_list(target, test_count, success_count);
	delete_test_list(&target);
	if (test_count == success_count)
		return (0);
	else
		return (-1);
}
