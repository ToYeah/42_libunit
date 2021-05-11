#include "libft.h"
#include "ctype.h"

int	isalpha_basic_test(void)
{
	if (ft_isalpha('a') == isalpha('a'))
		return(0);
	else
		return(-1);
}
