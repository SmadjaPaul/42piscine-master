/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:12:35 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:12:36 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	char ***ptr;
	char **ptr2;

	ptr = factory;
	while ((ptr2 = *ptr))
	{
		while (*ptr2)
			free(*ptr2++);
		free(*ptr2);
		free(*ptr++);
	}
	free(*ptr);
	free(factory);
}
