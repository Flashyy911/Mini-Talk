/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:31:52 by asbai-el          #+#    #+#             */
/*   Updated: 2021/06/19 14:07:28 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t c)
{
	int	i;

	if (!dst || !src)
		return (0);
	i = 0;
	while (i < (int)c - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (c > 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}
