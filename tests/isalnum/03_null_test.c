#include "libft.h"
#include "ctype.h"

int	isalnum_null_test(void)
{
	if (ft_isalnum('\0') == isalnum('\0'))
		return (0);
	else
		return (-1);
}
