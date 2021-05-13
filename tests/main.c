#include "ft_atoi_test.h"
#include "ft_strlen_test.h"
#include "ft_strdup_test.h"
#include "ft_memset_test.h"
#include "ft_memcpy_test.h"
#include "ft_isdigit_test.h"
#include "ft_isalpha_test.h"
#include "ft_isalnum_test.h"
#include "libunit.h"

int main(void)
{
	atoi_launcher();
	strlen_launcher();
	strdup_launcher();
	memset_launcher();
	memcpy_launcher();
	isdigit_launcher();
	isalpha_launcher();
	isalnum_launcher();
}
