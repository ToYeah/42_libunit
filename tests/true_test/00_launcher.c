#include "ft_true_test.h"
#include "libunit.h"

int	true_test_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("TRUE_TEST:");
	load_test(&testlist, "01_OK test", &ok_test);
	load_test(&testlist, "02_KO test", &ko_test);
	load_test(&testlist, "03_SEGV test", &segv_test);
	load_test(&testlist, "04_BUS test", &bus_test);
	return (launch_tests(&testlist));
}
