/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:27:59 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:27:59 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	ft_strlen(const char *str)
{
	char	*end;

	end = (char *)str;
	while (*end)
		++end;
	return ((unsigned)(end - str));
}
