/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:12:40 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:12:40 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if ((j <= i && i <= k) || (k <= i && i <= j))
		return (i);
	if ((i <= j && j <= k) || (k <= j && j <= i))
		return (j);
	return (k);
}
