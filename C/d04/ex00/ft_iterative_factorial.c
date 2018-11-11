/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:05:54 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:05:54 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb >= 13)
		return (0);
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	i = 0;
	result = 1;
	while (++i <= nb)
		result *= i;
	return (result);
}
