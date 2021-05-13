#include "ft_tolower_test.h"
#include "libunit.h"

int tolower_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	puts("TOLOWER:");
	load_test(&testlist, "01_Basic test", &tolower_basic_test);
	load_test(&testlist, "02_LOWER test", &tolower_lower_test);
	//load_test(&testlist, "Bigger string test", &bigger_str_test); /* This test won't be loaded */
	return(launch_tests(&testlist));
}
