/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:42:09 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:42:09 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int			ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str++ != '\0')
	{
		++len;
	}
	return (len);
}

unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char *dptr;
	char *sptr;

	dptr = dest;
	sptr = src;
	while (size-- && (*dptr++ = *sptr++) != '\0')
		;
	if (*sptr != '\0')
	{
		*(dptr - 1) = '\0';
		return ((unsigned int)(ft_strlen(src)));
	}
	return (dptr - dest - 1);
}
