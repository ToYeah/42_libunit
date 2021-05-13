#include "libft.h"
#include <string.h>

int	atoi_text2_test(void)
{
	char	*s;

	s = "12s3";
	if (ft_atoi(s) == atoi(s))
		return(0);
	else
		return(-1);
}
