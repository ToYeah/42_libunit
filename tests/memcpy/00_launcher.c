#include "ft_memcpy_test.h"
#include "libunit.h"

int memcpy_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	puts("MEMCPY:");
	load_test(&testlist, "01_Basic test", &memcpy_basic_test);
	load_test(&testlist, "02_DEST_NULL test", &memcpy_null_test);
	load_test(&testlist, "03_SRC_EMPTY test", &memcpy_empty_test);
	//load_test(&testlist, "Bigger string test", &bigger_str_test); /* This test won't be loaded */
	return(launch_tests(&testlist));
}
