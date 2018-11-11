/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:31:53 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 14:31:54 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	int a;
	int b;

	if (root == NULL)
		return (0);
	a = btree_level_count(root->left);
	b = btree_level_count(root->right);
	return (1 + (a > b ? a : b));
}
