#include "libft.h"
#include <string.h>

int			strncmp_basic_test(void)
{
	char	*s1;
	char	*s2;

	s1 = "abcdefg";
	s2 = "abc000";
	if (ft_strncmp(s1, s2, 5) == strncmp(s1, s2, 5))
		return(0);
	else
		return(-1);
}
