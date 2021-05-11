#include "libunit.h"

void	load_test(t_unit_test **list, const char *description, t_test_func f)
{
	t_unit_test	*test;

	test = test_init(description, f);
	if (list == NULL || test == NULL)
		error_exit();
	test_add_front(list, test);
}

int	launch_tests(t_unit_test **test)
{
	t_unit_test	*target;

	if (test == NULL || *test == NULL)
		error_exit();
	target = *test;
	target = exec_test_list(*test);
	target = print_test_list(target);
	delete_test_list(&target);
	return (0);
}
