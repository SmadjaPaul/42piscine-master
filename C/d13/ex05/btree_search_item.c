/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:31:39 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:31:40 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *d, int (*cmpf)(void *, void *))
{
	int cmp;

	if (root == NULL || cmpf == NULL)
		return (NULL);
	if ((cmp = cmpf(root->item, d)) == 0)
		return (root->item);
	if (cmp > 0)
		return (btree_search_item(root->left, d, cmpf));
	return (btree_search_item(root->right, d, cmpf));
}
