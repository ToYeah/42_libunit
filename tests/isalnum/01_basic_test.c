#include "libft.h"
#include "ctype.h"

int	isalnum_basic_test(void)
{
	if (ft_isalnum('a') == isalnum('a'))
		return(0);
	else
		return(-1);
}
