#include "libft.h"
#include <ctype.h>

int	isdigit_basic_test(void)
{
    if (ft_isdigit('4') == isdigit('4'))
        return(0);
    else
        return(-1);
}
