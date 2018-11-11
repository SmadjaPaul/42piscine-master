/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:34:10 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:34:12 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *head;
	t_list *node;

	if (ac < 1)
		return (NULL);
	if ((head = ft_create_elem(av[--ac])) == NULL)
		return (NULL);
	node = head;
	while (ac > 0 && (node->next = ft_create_elem(av[--ac])) != NULL)
		node = node->next;
	return (head);
}
