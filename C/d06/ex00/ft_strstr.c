/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:43:04 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:43:05 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char			*begin;
	char			*to_find_cp;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		begin = str;
		to_find_cp = to_find;
		while (*to_find_cp == *str)
		{
			++str;
			++to_find_cp;
		}
		if (*to_find_cp == '\0')
			return (begin);
		str = begin + 1;
	}
	return ((char *)0);
}
