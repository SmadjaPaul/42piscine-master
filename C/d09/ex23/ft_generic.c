/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:14:44 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:14:45 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STRNSIZE(s) (s), (sizeof(s)-1)

void	ft_generic(void)
{
	write(1, STRNSIZE("Tut tut ; Tut tut\n"));
}
