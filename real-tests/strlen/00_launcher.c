#include "ft_strlen_test.h"
#include "libunit.h"
int	strlen_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("STRLEN:");
	load_test(&testlist, "01_Basic test", &basic_test);
	load_test(&testlist, "02_SPACE test", &space_test);
	load_test(&testlist, "03_UNICODE test", &unicode_test);
	load_test(&testlist, "04_EMPTY test", &empty_test);
	load_test(&testlist, "05_ZERO test", &zero_test);
	return (launch_tests(&testlist));
}
