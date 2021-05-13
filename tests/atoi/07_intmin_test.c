#include "libft.h"
#include <string.h>
#include <limits.h>

int	atoi_intmin_test(void)
{
	char *str;

	str = "INT_MIN";

	if (ft_atoi(str) == atoi(str))
		return (0);
	else
		return (-1);
}
