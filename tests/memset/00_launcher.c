#include "ft_memset_test.h"
#include "libunit.h"

int memset_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	puts("MEMSET:");
	load_test(&testlist, "01_Basic test", &memset_basic_test);
	load_test(&testlist, "02_NULL test", &memset_null_test);
	load_test(&testlist, "03_ZERO test", &memset_zero_test);
	//load_test(&testlist, "Bigger string test", &bigger_str_test); /* This test won't be loaded */
	return(launch_tests(&testlist));
}
