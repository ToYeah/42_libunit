#include "libft.h"
#include "libunit.h"
#include "string.h"

int	memcpy_empty_test(void)
{
	char	*dest;
	char	*str;

	dest = (void *)my_strdup("bbbb bbbbb");
	str = (void *)my_strdup("");
	if (ft_memcpy(dest, str, 4) == memcpy(dest, str, 4))
		return (0);
	else
		return (-1);
}
