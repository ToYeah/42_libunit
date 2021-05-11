#include "libft.h"
#include <string.h>

int	atoi_neg_test(void)
{
    if (ft_atoi("-12345") == atoi("-12345"))
        return(0);
    else
        return(-1);
}
