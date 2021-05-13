#include "libft.h"
#include <string.h>

int	space_test(void)
{
	char *str;

	str = "aaaa     aaa";

	if (ft_strlen(str) == strlen(str))
		return(0);
	else
		return(-1);
}
