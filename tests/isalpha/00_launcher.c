#include "ft_isalpha_test.h"
#include "libunit.h"

int	isalpha_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("ISALPHA:");
	load_test(&testlist, "01_Basic test", &isalpha_basic_test);
	load_test(&testlist, "02_NULL test", &isalpha_null_test);
	load_test(&testlist, "03_DIGIT test", &isalpha_digit_test);
	return (launch_tests(&testlist));
}
