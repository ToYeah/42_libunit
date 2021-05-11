#include "libft.h"
#include <string.h>

int	atoi_escape_test(void)
{
    char *str;

    str = "\t\v\f\r\n \f-06050";

    if (ft_atoi(str) == atoi(str))
        return(0);
    else
        return(-1);
}
