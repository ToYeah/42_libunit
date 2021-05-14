#include "libft.h"
#include <string.h>

int	unicode_test(void)
{
	if (ft_strlen("♫♪.l|̲̅●̲̅|̲̅") == strlen("♫♪.l|̲̅●̲̅|̲̅"))
		return (0);
	else
		return (-1);
}
