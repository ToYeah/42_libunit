#include "libft.h"
#include <string.h>

int			strchr_nothing_test(void)
{
	char	*str;

	str = "aaaaaaaa";
	if (ft_strchr(str, 'e') == strchr(str, 'e'))
		return(0);
	else
		return(-1);
}
