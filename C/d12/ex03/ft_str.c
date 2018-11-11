/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:29:16 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:29:17 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

unsigned	ft_strlen(const char *str)
{
	char	*end;

	end = (char *)str;
	while (*end)
		++end;
	return ((unsigned)(end - str));
}

int			ft_strall(char *str, char c)
{
	int i;

	i = -1;
	while (++i < BUFFS)
		if (str[i] != c)
			return (0);
	return (1);
}

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		*(dest + i) = *(src + i);
		++i;
	}
	while (i < n)
		*(dest + i++) = '\0';
	return (dest);
}
