#include "libft.h"
#include <ctype.h>

int	isdigit_alpha_test(void)
{
	if (ft_isdigit('z') == isdigit('z'))
		return(0);
	else
		return(-1);
}
