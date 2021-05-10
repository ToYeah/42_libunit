#include "../includes/libunit.h"

void load_test(t_unit_test **list, const char *description, t_test_func f)
{
	t_unit_test *test;

	test = test_init(description, f);
	if (test == NULL)
	{
		//TODO error exit??
	}
	test_add_front(list, test);
}