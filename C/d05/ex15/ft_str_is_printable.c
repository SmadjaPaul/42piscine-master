/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:03:42 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:03:43 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprintable(int c)
{
	return (c > 31 && c < 127);
}

int		ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (ft_isprintable(*str) == 0)
			return (0);
		++str;
	}
	return (1);
}
