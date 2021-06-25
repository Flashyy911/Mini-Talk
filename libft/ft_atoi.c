/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 23:37:52 by asbai-el          #+#    #+#             */
/*   Updated: 2021/06/19 14:04:42 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
long long	ft_atoi(const char *str)
{
	long long		nbr;
	int				i;
	int				sign;

	nbr = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		i++;
		sign = -1;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]) == 1 && str[i])
	{
		nbr = (nbr * 10) + ((str[i]) - 48);
		i++;
	}
	return (nbr * sign);
}
