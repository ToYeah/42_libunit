#include "libft.h"
#include "libunit.h"
#include <string.h>

int	memset_basic_test(void)
{
	char	*str;

	str = (void *)my_strdup("Hello");
	if (ft_memset(str, 'a', 3) == memset(str, 'a', 3))
		return (0);
	else
		return (-1);
}
