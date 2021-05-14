#include "libft.h"
#include "libunit.h"
#include <strings.h>

int	bzero_basic_test(void)
{
	char	*str;

	str = (void *)my_strdup("Hello");
	if (ft_bzero(str, 3) == bzero(str, 3))
		return (0);
	else
		return (-1);
}
