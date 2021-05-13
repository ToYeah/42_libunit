#include "libft.h"
#include "string.h"

int	memcpy_empty_test(void)
{
	char	*dest;

	dest = "aaaaaaaaa";
	if (ft_memcpy(dest, "", 4) == memcpy(dest, "", 4))
		return(0);
	else
		return(-1);
}
