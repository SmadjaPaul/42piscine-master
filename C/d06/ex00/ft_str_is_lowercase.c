/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucas- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 09:15:00 by alucas-           #+#    #+#             */
/*   Updated: 2017/07/06 09:15:01 by alucas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int			ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (ft_islower(*str) == 0)
			return (0);
		++str;
	}
	return (1);
}
