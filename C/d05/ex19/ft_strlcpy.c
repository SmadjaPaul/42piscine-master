/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:04:08 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:04:08 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str++ != '\0')
		++len;
	return (len);
}

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned	i;

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

unsigned	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char		*sptr;
	unsigned	slen;

	sptr = src;
	while (*sptr++)
		;
	slen = ((unsigned)(sptr - src - 1));
	if (slen < size)
		ft_strncpy(dest, src, slen + 1);
	else if (size != 0)
	{
		ft_strncpy(dest, src, size - 1);
		dest[size - 1] = '\0';
	}
	return (slen);
}
