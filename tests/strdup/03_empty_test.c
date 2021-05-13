#include "libft.h"
#include "string.h"

int	strdup_empty_test(void)
{
	if (ft_strdup("") == strdup(""))
		return(0);
	else
		return(-1);
}
