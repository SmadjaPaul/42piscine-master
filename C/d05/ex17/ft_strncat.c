/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:03:56 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:03:57 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	char *ptr;

	ptr = dest;
	while (*ptr != '\0')
		++ptr;
	while (nb-- && (*ptr++ = *src++) != '\0')
		;
	if (nb <= 0)
		*ptr = '\0';
	return (dest);
}
