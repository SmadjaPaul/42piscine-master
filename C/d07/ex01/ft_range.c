/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:09:09 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:09:09 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range;
	int *rptr;

	if (min >= max)
		return (NULL);
	range = malloc((max - min) * sizeof(int));
	if (!range)
		return (NULL);
	rptr = range;
	while (min < max)
		*rptr++ = min++;
	return (range);
}
