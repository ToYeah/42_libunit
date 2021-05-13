#include "libft.h"
#include "ctype.h"

int	isalnum_basic_2_test(void)
{
	if (ft_isalnum('3') == isalnum('3'))
		return(0);
	else
		return(-1);
}
