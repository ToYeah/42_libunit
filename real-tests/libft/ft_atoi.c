/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totaisei <totaisei@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 12:27:41 by totaisei          #+#    #+#             */
/*   Updated: 2021/05/14 16:42:02 by totaisei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	sign_branch(char sign)
{
	if (sign == '-')
		return (-1);
	return (1);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	unsigned long	ov_div;
	unsigned long	result;

	i = 0;
	result = 0;
	ov_div = MY_LONG_MAX / 10;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	sign = sign_branch(str[i]);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && ('0' <= str[i] && str[i] <= '9'))
	{
		if ((ov_div < result || (ov_div == result && str[i] > '7'))
			&& sign == 1)
			return ((int)MY_LONG_MAX);
		else if ((ov_div < result || (ov_div == result && str[i] > '8'))
			&& sign == -1)
			return ((int)(MY_LONG_MAX * -1 - 1));
		result *= 10;
		result += str[i++] - '0';
	}
	return ((int)result * sign);
}
