#include "libft.h"
#include <string.h>

int	memset_null_test(void)
{
	if (ft_memset(NULL, 'a', 3) == memset(NULL, 'a', 3))
		return(0);
	else
		return(-1);
}
