/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:54:04 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 13:54:23 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq/types.h"
#include "bsq/error.h"

inline unsigned int	bsq_exit(char *msg, int size)
{
	UNUSED(size = (signed)write(1, msg, (size_t)size));
	exit(1);
	return (0);
}
