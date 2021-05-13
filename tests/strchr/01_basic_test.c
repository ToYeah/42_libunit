#include "libft.h"
#include <string.h>

int			strchr_basic_test(void)
{
	char	*str;

	str = "abcdefg";
	if (ft_strchr(str, 'e') == strchr(str, 'e'))
		return(0);
	else
		return(-1);
}
