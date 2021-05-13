#include "libft.h"
#include <string.h>

int			strchr_null_test(void)
{
	char	*str;

	str = NULL;
	if (ft_strchr(str, 'e') == strchr(str, 'e'))
		return(0);
	else
		return(-1);
}
