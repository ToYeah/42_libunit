#include "libft.h"
#include "string.h"

int	memcpy_basic_test(void)
{
	char	*dest;
	char	*str;

	dest = "bbbb bbbbb";
	str = "aaaa aaaaa";
	if (ft_memcpy(dest, str, 4) == memcpy(dest, str, 4))
		return(0);
	else
		return(-1);
}
