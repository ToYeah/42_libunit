#include "libft.h"
#include <ctype.h>

int	tolower_basic_test(void)
{
	if (ft_tolower('A') == tolower('A'))
		return (0);
	else
		return (-1);
}
