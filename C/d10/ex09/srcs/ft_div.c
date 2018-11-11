/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:23:12 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:23:13 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_dope.h"

char		*ft_div(int l, int r, int *out)
{
	if (r == 0)
		return ("Stop : division by zero");
	*out = l / r;
	return (NULL);
}
