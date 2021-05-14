#include "libft.h"
#include <string.h>

int	strrchr_nothing_test(void)
{
	char	*str;

	str = "aaaaaaaa";
	if (ft_strrchr(str, 'e') == strrchr(str, 'e'))
		return (0);
	else
		return (-1);
}
