#include "libft.h"
#include "libunit.h"
#include "string.h"

int	segv_test(void)
{
	char	*dest;

	dest = (void *)my_strdup("bbbb bbbbb");
	if (ft_memcpy(dest, NULL, 4) == memcpy(dest, NULL, 4))
		return (0);
	else
		return (-1);
}
