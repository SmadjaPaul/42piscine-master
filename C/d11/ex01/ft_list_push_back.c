/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:33:01 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:33:02 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *node;
	t_list *new;

	if (begin_list == NULL)
		return ;
	if ((new = ft_create_elem(data)) == NULL)
		return ;
	if (*begin_list == NULL)
		*begin_list = new;
	else
	{
		node = *begin_list;
		while (node->next != NULL)
			node = node->next;
		node->next = new;
	}
}
