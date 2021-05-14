#include "ft_strdup_test.h"
#include "libunit.h"

int	strdup_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("STRDUP:");
	load_test(&testlist, "01_Basic test", &strdup_basic_test);
	load_test(&testlist, "02_EMPTY test", &strdup_empty_test);
	return (launch_tests(&testlist));
}
