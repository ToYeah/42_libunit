#include "libft.h"
#include <string.h>

int	zero_test(void)
{
	char	*str;

	str = "aaaa \0\0 aaaaaa";
	if (ft_strlen(str) == strlen(str))
		return (0);
	else
		return (-1);
}
