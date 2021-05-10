#include "../includes/libunit.h"

size_t	my_strlen(const char *str)
{
	size_t res;

	res = 0;
	while(str[res])
		res++;
	return (res);
}

char	*my_strdup(const char *str)
{
	size_t len;
	char *res;

	len = my_strlen(str);
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return NULL;
	len = 0;
	while (str[len])
	{
		res[len] = str[len];
		len++;
	}
	return res;
}
