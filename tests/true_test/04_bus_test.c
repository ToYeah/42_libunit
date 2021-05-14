#include "libft.h"
#include "libunit.h"
#include "string.h"

int	bus_test(void)
{
	char	*dest;
	char	*src;

	dest = "bbbb bbbbb";
	src = "aaaa aaaaa";
	if (ft_memcpy(dest, src, 4) == memcpy(dest, src, 4))
		return (0);
	else
		return (-1);
}
