#include "libft.h"
#include <string.h>

int	memset_zero_test(void)
{
	if (ft_memset("Hello", '0', 3) == memset("Hello", '0', 3))
		return(0);
	else
		return(-1);
}
