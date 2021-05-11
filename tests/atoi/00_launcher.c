#include "ft_atoi_test.h"
#include "libunit.h"
int atoi_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	puts("ATOI:");
	load_test(&testlist, "Basic test", &atoi_basic_test);
	load_test(&testlist, "NULL test", &atoi_null_test);
	load_test(&testlist, "INTMAX test", &atoi_intmax_test);
	load_test(&testlist, "INTMIN test", &atoi_intmin_test);
	//load_test(&testlist, "Bigger string test", &bigger_str_test); /* This test won't be loaded */
	return(launch_tests(&testlist));
}
