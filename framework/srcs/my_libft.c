#include "libunit.h"

size_t	my_strlen(const char *str)
{
	size_t	res;

	res = 0;
	while (str[res])
		res++;
	return (res);
}

char	*my_strdup(const char *str)
{
	size_t	len;
	char	*res;

	len = my_strlen(str);
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	len = 0;
	while (str[len])
	{
		res[len] = str[len];
		len++;
	}
	res[len] = '\0';
	return (res);
}

int	my_strcmp(const char *s1, const char *s2)
{
	size_t			i;
	size_t			len;
	unsigned char	*casted_s1;
	unsigned char	*casted_s2;

	i = 0;
	casted_s1 = (unsigned char *)s1;
	casted_s2 = (unsigned char *)s2;
	if (my_strlen(s1) > my_strlen(s2))
		len = my_strlen(s1);
	else
		len = my_strlen(s2);
	while (1)
	{
		if ((casted_s1[i] - casted_s2[i]) != 0)
			return (casted_s1[i] - casted_s2[i]);
		i++;
		if ((!(casted_s1[i]) && !(casted_s2[i])) || i == len)
			break ;
	}
	return (0);
}
