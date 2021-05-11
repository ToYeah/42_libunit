#include "libunit.h"

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
