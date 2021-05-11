#include "libft.h"
#include <string.h>

int	atoi_intmin_test(void)
{
    char *str;

    str = "-2147483648";

    if (ft_atoi(str) == atoi(str))
        return(0);
    else
        return(-1);
}
