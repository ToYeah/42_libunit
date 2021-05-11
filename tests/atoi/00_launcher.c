#include "ft_atoi_test.h"
#include "libunit.h"
int atoi_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	puts("ATOI:");
	load_test(&testlist, "Basic test", &atoi_basic_test);
	load_test(&testlist, "Basic_2 test", &atoi_basic2_test);
	load_test(&testlist, "ZERO test", &atoi_zero_test);
	load_test(&testlist, "NULL test", &atoi_null_test);
	load_test(&testlist, "NEG test", &atoi_neg_test);
	load_test(&testlist, "NEG_2 test", &atoi_neg2_test);
	load_test(&testlist, "INTMAX test", &atoi_intmax_test);
	load_test(&testlist, "INTMIN test", &atoi_intmin_test);
	load_test(&testlist, "BLANK test", &atoi_blank_test);
	load_test(&testlist, "BLANK_2 test", &atoi_blank2_test);
	load_test(&testlist, "ESCAPE test", &atoi_escape_test);
	load_test(&testlist, "ESCAPE_2 test", &atoi_escape2_test);
	load_test(&testlist, "TEXT test", &atoi_text_test);
	load_test(&testlist, "TEXT_2 test", &atoi_text2_test);
	load_test(&testlist, "LONGMAX test", &atoi_longmax_test);
	load_test(&testlist, "LONGMIN test", &atoi_longmin_test);
	//load_test(&testlist, "Bigger string test", &bigger_str_test); /* This test won't be loaded */
	return(launch_tests(&testlist));
}
