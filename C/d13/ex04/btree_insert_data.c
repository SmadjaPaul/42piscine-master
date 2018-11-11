/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:31:25 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:31:26 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *i, int (*cmpf)(void *, void *))
{
	t_btree **loc;

	if (root == NULL)
		return ;
	loc = root;
	while (*loc)
		loc = cmpf(i, (*loc)->item) < 0 ? &(*loc)->left : &(*loc)->right;
	*loc = btree_create_node(i);
}
