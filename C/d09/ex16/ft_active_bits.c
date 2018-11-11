/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:15:06 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:15:13 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	unsigned count;

	count = 0;
	while (value > 0)
	{
		if ((value & 1) == 1)
			count++;
		value >>= 1;
	}
	return (count);
}
