#include "libft.h"
#include <string.h>

int	strrchr_basic_test(void)
{
	char	*str;

	str = "abcdefg";
	if (ft_strrchr(str, 'e') == strrchr(str, 'e'))
		return (0);
	else
		return (-1);
}
