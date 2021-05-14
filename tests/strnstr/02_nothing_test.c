#include "libft.h"
#include <string.h>

int	strnstr_nothing_test(void)
{
	char	*s1;
	char	*s2;

	s1 = "abcdefg";
	s2 = "000";
	if (ft_strnstr(s1, s2, 5) == strnstr(s1, s2, 5))
		return (0);
	else
		return (-1);
}
