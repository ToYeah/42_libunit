#include "ft_strdup_test.h"
#include "libunit.h"

int strdup_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	puts("STRDUP:");
	load_test(&testlist, "01_Basic test", &strdup_basic_test);
	load_test(&testlist, "02_NULL test", &strdup_null_test);
	load_test(&testlist, "03_EMPTY test", &strdup_empty_test);
	//load_test(&testlist, "Bigger string test", &bigger_str_test); /* This test won't be loaded */
	return(launch_tests(&testlist));
}
