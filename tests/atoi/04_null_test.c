#include "libft.h"
#include <string.h>

int	atoi_null_test(void)
{
    char *str;

    str = NULL;

    if (ft_atoi(str) == atoi(str))
        return(0);
    else
        return(-1);
}
