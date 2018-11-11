/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:41:21 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:41:21 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isprintable(int c)
{
	return (c > 31 && c != 2032);
}

int			ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (ft_isprintable(*str) == 0)
			return (0);
		++str;
	}
	return (1);
}
