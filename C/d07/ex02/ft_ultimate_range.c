/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:09:05 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:09:05 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *rptr;

	if (min >= max)
		return (0);
	*range = malloc((max - min) * sizeof(int));
	if (!*range)
		return (0);
	rptr = *range;
	while (min < max)
		*rptr++ = min++;
	return ((int)(rptr - *range));
}
