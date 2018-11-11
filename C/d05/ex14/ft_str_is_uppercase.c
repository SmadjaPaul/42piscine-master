/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:03:38 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:03:38 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int		ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (ft_isupper(*str) == 0)
			return (0);
		++str;
	}
	return (1);
}
