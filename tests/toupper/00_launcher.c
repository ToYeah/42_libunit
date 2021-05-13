#include "ft_toupper_test.h"
#include "libunit.h"

int toupper_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	puts("TOUPPER:");
	load_test(&testlist, "01_Basic test", &toupper_basic_test);
	load_test(&testlist, "02_UPPER test", &toupper_upper_test);
	//load_test(&testlist, "Bigger string test", &bigger_str_test); /* This test won't be loaded */
	return(launch_tests(&testlist));
}
