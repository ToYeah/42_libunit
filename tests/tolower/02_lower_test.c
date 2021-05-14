#include "libft.h"
#include <ctype.h>

int	tolower_lower_test(void)
{
	if (ft_tolower('a') == tolower('a'))
		return (0);
	else
		return (-1);
}
