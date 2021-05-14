#include "libft.h"
#include <string.h>
#include <limits.h>

int	atoi_intmax_test(void)
{
	char	*str;

	str = "INT_MAX";
	if (ft_atoi(str) == atoi(str))
		return (0);
	else
		return (-1);
}
