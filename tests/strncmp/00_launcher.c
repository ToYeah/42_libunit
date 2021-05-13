#include "ft_strncmp_test.h"
#include "libunit.h"

int strncmp_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	puts("STRNCMP:");
	load_test(&testlist, "01_Basic test", &strncmp_basic_test);
	load_test(&testlist, "02_SAME_STR test", &strncmp_same_str_test);
	//load_test(&testlist, "Bigger string test", &bigger_str_test); /* This test won't be loaded */
	return(launch_tests(&testlist));
}
