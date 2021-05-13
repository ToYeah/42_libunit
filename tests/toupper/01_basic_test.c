#include "libft.h"
#include <ctype.h>

int	toupper_basic_test(void)
{
	if (ft_toupper('a') == toupper('a'))
		return(0);
	else
		return(-1);
}
