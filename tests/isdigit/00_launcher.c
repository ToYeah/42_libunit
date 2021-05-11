#include "ft_isdigit_test.h"
#include "libunit.h"

int isdigit_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	puts("ISDIGIT:");
	load_test(&testlist, "Basic test", &isdigit_basic_test);
	load_test(&testlist, "NULL test", &isdigit_null_test);
	load_test(&testlist, "ALPHA test", &isdigit_alpha_test);
	//load_test(&testlist, "Bigger string test", &bigger_str_test); /* This test won't be loaded */
	return(launch_tests(&testlist));
}
