#include "libft.h"
#include <string.h>

int	memset_basic_test(void)
{
	if (ft_memset("Hello", 'a', 3) == memset("Hello", 'a', 3))
		return(0);
	else
		return(-1);
}
