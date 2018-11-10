/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucas- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 09:13:11 by alucas-           #+#    #+#             */
/*   Updated: 2017/07/21 09:13:13 by alucas-          ###   ########.fr       */
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
