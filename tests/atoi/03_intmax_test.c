#include "libft.h"
#include <string.h>

int	atoi_intmax_test(void)
{
    char *str;

    str = "2147483647";

    if (ft_atoi(str) == atoi(str))
        return(0);
    else
        return(-1);
}
