#include "ft_strnstr_test.h"
#include "libunit.h"

int strnstr_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	puts("STRNSTR:");
	load_test(&testlist, "01_Basic test", &strnstr_basic_test);
	load_test(&testlist, "02_NULL test", &strnstr_null_test);
	//load_test(&testlist, "Bigger string test", &bigger_str_test); /* This test won't be loaded */
	return(launch_tests(&testlist));
}
