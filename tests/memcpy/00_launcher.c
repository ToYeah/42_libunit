#include "ft_memcpy_test.h"
#include "libunit.h"

int	memcpy_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("MEMCPY:");
	load_test(&testlist, "01_Basic test", &memcpy_basic_test);
	load_test(&testlist, "02_SRC_EMPTY test", &memcpy_empty_test);
	return (launch_tests(&testlist));
}
