/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:41:14 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:41:15 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int			ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (ft_isdigit(*str) == 0)
			return (0);
		++str;
	}
	return (1);
}
