#include "ft_strlen_test.h"
#include "libunit.h"
int strlen_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	puts("STRLEN:");
	load_test(&testlist, "Basic test", &basic_test);
	load_test(&testlist, "NULL test", &null_test);
	load_test(&testlist, "UNICODE test", &unicode_test);
	load_test(&testlist, "EMPTY test", &empty_test);
	load_test(&testlist, "ZERO test", &zero_test);
	//load_test(&testlist, "Bigger string test", &bigger_str_test); /* This test won't be loaded */
	return(launch_tests(&testlist));
}
