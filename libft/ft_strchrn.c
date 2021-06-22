/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 19:24:01 by asbai-el          #+#    #+#             */
/*   Updated: 2019/12/24 11:55:10 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strchrn(const char *str, char chr)
{
	int i;

	i = 0;
	while (*(str))
	{
		if (*str == chr)
			i++;
		str++;
	}
	return (i);
}