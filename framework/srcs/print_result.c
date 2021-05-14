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

static void	print_target(t_unit_test *target, const char *str)
{
	if (my_strcmp(str, "OK") == 0)
		printf("\x1b[32mOK\033[m");
	if (my_strcmp(str, "KO") == 0)
		printf("\x1b[31mKO\033[m");
	if (my_strcmp(str, "SEGV") == 0)
		printf("\x1b[34mSEGV\033[m");
	if (my_strcmp(str, "BUS") == 0)
		printf("\x1b[33mBUS\033[m");
	printf(": %s\n", target->description);
	return ;
}

t_unit_test	*print_test_list(t_unit_test *list, int count, int res)
{
	t_unit_test	*target;
	const char		*str;

	target = list;
	while (target)
	{
		str = str_test_res(target->res);
		print_target(target, str);
		if (target->prev == NULL)
			break ;
		else
			target = target->prev;
	}
	printf("result: %d/%d\n", res, count);
	return (target);
}
