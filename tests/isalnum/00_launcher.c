#include "ft_isalnum_test.h"
#include "libunit.h"

int isalnum_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	puts("ISALNUM:");
	load_test(&testlist, "01_Basic test", &isalnum_basic_test);
	load_test(&testlist, "02_Basc_2 test", &isalnum_basic_2_test);
	load_test(&testlist, "03_NUMM test", &isalnum_null_test);
	//load_test(&testlist, "Bigger string test", &bigger_str_test); /* This test won't be loaded */
	return(launch_tests(&testlist));
}
