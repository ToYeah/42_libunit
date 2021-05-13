#include "libft.h"
#include "string.h"

int	memcpy_null_test(void)
{
	char	*dest;
	char	*str;

	dest = NULL;
	str = "aaaaaa";
	if (ft_memcpy(dest, str, 4) == memcpy(dest, str, 4))
		return(0);
	else
		return(-1);
}
