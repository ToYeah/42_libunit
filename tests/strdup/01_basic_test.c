#include "libft.h"
#include "string.h"

int	strdup_basic_test(void)
{
	char	*str;

	str = "aaabb";
	if (ft_strdup(str) == strdup(str))
		return(0);
	else
		return(-1);
}
