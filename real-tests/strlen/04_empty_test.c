#include "libft.h"
#include <string.h>

int	empty_test(void)
{
	if (ft_strlen("") == strlen(""))
		return (0);
	else
		return (-1);
}
