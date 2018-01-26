/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   level.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 15:13:02 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/26 17:19:56 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "btree.h"

int			btree_level_count(t_btree *root)
{
	int	left_nb;
	int	right_nb;

	left_nb = 0;
	right_nb = 0;
	if (!root)
		return (0);
	if (root->right)
	{
		++right_nb;
		right_nb += btree_level_count(root->right);
	}
	if (root->left)
	{
		++left_nb;
		left_nb += btree_level_count(root->left);
	}
	return (right_nb > left_nb ? right_nb : left_nb);
}

static void	tree_level(t_btree *node, int depth, int first,
					void (*apply)(void*, int, int))
{
	if (!node)
		return ;
	if (!depth)
		apply(node->data, depth, 0);
	else
	{
		tree_level(node->left, depth - 1, 3, apply);
		tree_level(node->right, depth - 1, 3, apply);
	}
}

void		btree_apply_level(t_btree *root,
							void (*apply)(void *item, int depth, int is_first))
{
	int		height;
	int		i;

	i = 0;
	height = btree_level_count(root);
	while (i < height)
	{
		tree_level(root, i, 3, apply);
		++i;
	}
}
