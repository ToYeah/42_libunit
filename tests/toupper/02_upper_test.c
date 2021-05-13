#include "libft.h"
#include <ctype.h>

int	toupper_upper_test(void)
{
	if (ft_toupper('A') == toupper('A'))
		return(0);
	else
		return(-1);
}
