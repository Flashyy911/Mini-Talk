/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 19:30:25 by asbai-el          #+#    #+#             */
/*   Updated: 2019/10/27 19:31:00 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Headers/libft.h"

void	ft_putchar(char c)
{
	ft_putchar_fd(c, 1);
}


void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}