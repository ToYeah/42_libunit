#include "ft_isalpha_test.h"
#include "libunit.h"

int isalpha_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	puts("ISALPHA:");
	load_test(&testlist, "Basic test", &isalpha_basic_test);
	load_test(&testlist, "NULL test", &isalpha_null_test);
	load_test(&testlist, "DIGIT test", &isalpha_digit_test);
	//load_test(&testlist, "Bigger string test", &bigger_str_test); /* This test won't be loaded */
	return(launch_tests(&testlist));
}
