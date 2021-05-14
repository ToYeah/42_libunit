#include "libft.h"
#include "libunit.h"
#include <string.h>

int	bzero_empty_test(void)
{
	char	*str;

	str = (void *)my_strdup("");
	if (ft_bzero(str, 3) == bzero(str, 3))
		return (0);
	else
		return (-1);
}
