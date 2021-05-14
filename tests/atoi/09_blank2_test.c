#include "libft.h"
#include <string.h>

int	atoi_blank2_test(void)
{
	if (ft_atoi("123 45") == atoi("123 45"))
		return (0);
	else
		return (-1);
}
