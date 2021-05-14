#include "libft.h"
#include "libunit.h"
#include "string.h"

int	strdup_basic_test(void)
{
	char	*str;

	str = "aaabb";
	if (my_strcmp(ft_strdup(str) ,strdup(str)) == 0)
		return(0);
	else
		return(-1);
}
