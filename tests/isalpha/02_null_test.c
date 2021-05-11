#include "libft.h"
#include "ctype.h"

int	isalpha_null_test(void)
{
	if (ft_isalpha('\0') == isalpha('\0'))
		return(0);
	else
		return(-1);
}
