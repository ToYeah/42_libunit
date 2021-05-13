#include "ft_atoi_test.h"
#include "libunit.h"
int atoi_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	puts("ATOI:");
	load_test(&testlist, "01_Basic test", &atoi_basic_test);
	load_test(&testlist, "02_Basic_2 test", &atoi_basic2_test);
	load_test(&testlist, "03_ZERO test", &atoi_zero_test);
	load_test(&testlist, "04_NEG test", &atoi_neg_test);
	load_test(&testlist, "05_NEG_2 test", &atoi_neg2_test);
	load_test(&testlist, "06_INTMAX test", &atoi_intmax_test);
	load_test(&testlist, "07_INTMIN test", &atoi_intmin_test);
	load_test(&testlist, "08_BLANK test", &atoi_blank_test);
	load_test(&testlist, "09_BLANK_2 test", &atoi_blank2_test);
	load_test(&testlist, "10_ESCAPE test", &atoi_escape_test);
	load_test(&testlist, "11_ESCAPE_2 test", &atoi_escape2_test);
	load_test(&testlist, "12_TEXT test", &atoi_text_test);
	load_test(&testlist, "13_TEXT_2 test", &atoi_text2_test);
	load_test(&testlist, "14_LONGMAX test", &atoi_longmax_test);
	load_test(&testlist, "15_LONGMIN test", &atoi_longmin_test);
	//load_test(&testlist, "Bigger string test", &bigger_str_test); /* This test won't be loaded */
	return(launch_tests(&testlist));
}
