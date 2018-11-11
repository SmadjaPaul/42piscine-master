/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mod.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:19:54 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:19:54 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_dope.h"

char		*ft_mod(int l, int r, int *out)
{
	if (r == 0)
		return ("Stop : modulo by zero");
	*out = l % r;
	return (NULL);
}
