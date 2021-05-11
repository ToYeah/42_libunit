#include "libft.h"
#include <string.h>
#include <limits.h>

int	atoi_longmax_test(void)
{
	char	*s;

	s = "LONG_MAX";
	if (ft_atoi(s) == atoi(s))
		return(0);
	else
		return(-1);
}
