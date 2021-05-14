#include "ft_strrchr_test.h"
#include "libunit.h"

int	strrchr_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("STRRCHR:");
	load_test(&testlist, "01_Basic test", &strrchr_basic_test);
	load_test(&testlist, "02_NOTHING test", &strrchr_nothing_test);
	return (launch_tests(&testlist));
}
