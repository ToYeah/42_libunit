#include "libft.h"
#include "libunit.h"
#include "string.h"

int	memmove_basic_test(void)
{
	char	*dest;
	char	*str;

	dest = (void *)my_strdup("bbbb bbbbb");
	str = (void *)my_strdup("aaaa aaaaa");
	if (ft_memmove(dest, str, 4) == memmove(dest, str, 4))
		return (0);
	else
		return (-1);
}
