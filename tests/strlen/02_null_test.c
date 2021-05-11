#include "libft.h"
#include <string.h>

int	null_test(void)
{
    char *str;

    str = NULL;

    if (ft_strlen(str) == strlen(str))
        return(0);
    else
        return(-1);
}
