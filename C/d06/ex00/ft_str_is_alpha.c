/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:40:04 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:40:05 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int		ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (ft_isalpha(*str) == 0)
			return (0);
		++str;
	}
	return (1);
}
