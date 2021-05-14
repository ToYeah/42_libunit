/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakaseg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 14:46:06 by msakaseg          #+#    #+#             */
/*   Updated: 2021/05/14 17:39:16 by msakaseg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_isspace(const char *str)
{
	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n'
			|| *str == '\r' || *str == '\v' || *str == '\f')
			str++;
		else
			break ;
	}
	return (str);
}

int	ft_atoi(const char *str)
{
	int		t;
	int		s;
	long	total;

	t = 1;
	s = 0;
	total = 0;
	str = ft_isspace(str);
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			t = -1;
		str++;
	}
	while (*str && ft_isdigit(*str) && s < 11)
	{
		total = total * 10 + (*str++ - '0');
		s++;
	}
	if (s == 11)
		return (0);
	return ((int)total * t);
}

/*
**int	main(void)
**{
**	printf("%d\n", atoi((void *)0));
**	printf("%d\n", ft_atoi((void *)0));
**}
*/
