#include "ft_strchr_test.h"
#include "libunit.h"

int	strchr_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("STRCHR:");
	load_test(&testlist, "01_Basic test", &strchr_basic_test);
	load_test(&testlist, "02_NOTHING test", &strchr_nothing_test);
	return (launch_tests(&testlist));
}
