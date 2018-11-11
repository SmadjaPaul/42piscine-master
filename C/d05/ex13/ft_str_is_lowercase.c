/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:03:32 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:03:33 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int		ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (ft_islower(*str) == 0)
			return (0);
		++str;
	}
	return (1);
}
