/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:39:58 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:39:59 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int result;

	result = 1;
	while (result * result <= nb)
	{
		if (result * result == nb)
			return (result);
		++result;
	}
	return (0);
}
