#include "libft.h"
#include <ctype.h>

int	isdigit_null_test(void)
{
	if (ft_isdigit('\0') == isdigit('\0'))
		return(0);
	else
		return(-1);
}
