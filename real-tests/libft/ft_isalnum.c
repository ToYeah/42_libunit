/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totaisei <totaisei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 22:11:19 by totaisei          #+#    #+#             */
/*   Updated: 2021/05/14 17:44:13 by msakaseg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (('0' <= c && c <= '9')
		|| ('A' <= c && c <= 'Z')
		|| ('a' <= c && c <= 'z'))
		return (1);
	return (0);
}
