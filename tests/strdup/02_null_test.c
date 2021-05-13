#include "libft.h"
#include "string.h"

int	strdup_null_test(void)
{
	char	*str;

	str = NULL;
	if (ft_strdup(str) == strdup(str))
		return(0);
	else
		return(-1);
}
