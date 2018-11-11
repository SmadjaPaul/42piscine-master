/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:06:26 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:06:27 by pasmadja         ###   ########.fr       */
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
