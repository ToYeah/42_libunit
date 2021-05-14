#include "libft.h"
#include "libunit.h"
#include <string.h>

int	memset_zero_test(void)
{
	char	*str;

	str = (void *)my_strdup("Hello");
	if (ft_memset(str, '0', 3) == memset(str, '0', 3))
		return (0);
	else
		return (-1);
}
