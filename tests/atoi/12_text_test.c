#include "libft.h"
#include <string.h>

int	atoi_text_test(void)
{
	char	*s;

	s = "adg123";
	if (ft_atoi(s) == atoi(s))
		return(0);
	else
		return(-1);
}
