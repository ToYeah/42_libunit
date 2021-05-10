#include "../includes/libunit.h"

void error_exit()
{
	const char *str;

	str = "ERROR EXIT";
	write(2, str, my_strlen(str));
	exit(EXIT_FAILURE);
}