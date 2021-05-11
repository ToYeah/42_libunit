#include "libft.h"
#include <string.h>

int	atoi_zero_test(void)
{
    if (ft_atoi("0") == atoi("0"))
        return(0);
    else
        return(-1);
}
