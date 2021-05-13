#include "libunit.h"

const char	*str_test_res(t_test_res res)
{
	if (res == RESOK)
		return ("OK");
	if (res == RESKO)
		return ("KO");
	if (res == RESSEGV)
		return ("SEGV");
	if (res == RESBUS)
		return ("BUS");
	return ("UNKNOWN");
}

t_unit_test	*print_test_list(t_unit_test *list, int count, int res)
{
	t_unit_test	*target;

	target = list;
	while (target)
	{
		printf("%s: %s\n", str_test_res(target->res), target->description);
		if (target->prev == NULL)
			break ;
		else
			target = target->prev;
	}
	printf("result: %d/%d\n", res, count);
	return (target);
}
