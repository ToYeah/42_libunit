#include "ft_memmove_test.h"
#include "libunit.h"

int	memmove_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("MEMMOVE:");
	load_test(&testlist, "01_Basic test", &memmove_basic_test);
	load_test(&testlist, "02_SRC_EMPTY test", &memmove_empty_test);
	return (launch_tests(&testlist));
}
