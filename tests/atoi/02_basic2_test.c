#include "libft.h"
#include <string.h>

int	atoi_basic2_test(void)
{
    if (ft_atoi("205860") == atoi("205860"))
        return(0);
    else
        return(-1);
}
