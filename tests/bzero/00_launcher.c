#include "ft_bzero_test.h"
#include "libunit.h"

int	bzero_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("BZERO:");
	load_test(&testlist, "01_Basic test", &bzero_basic_test);
	load_test(&testlist, "02_ZERO test", &bzero_empty_test);
	return (launch_tests(&testlist));
}
