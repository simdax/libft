/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   level.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 15:13:02 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/26 19:49:05 by scornaz          ###   ########.fr       */
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

static void	tree_level(t_btree *node, t_io args,
					   void (*apply)(void*, int, int, int))
{
	if (!node)
		return ;
	if (!args.i)
		apply(node->data, args.j, args.k, args.h);
	else
	{
		--args.i;
		if (node->left)
		{
			if (args.k)
				++args.k;
			tree_level(node->left, args, apply);
		}
		if (node->right)
		{
			if (node->left)
				++args.k;
			tree_level(node->right, args, apply);
		}
	}
}

void		btree_apply_level(t_btree *root,
							  void (*apply)(void *item,int, int, int))
{
	int		height;
	int		i;

	i = 0;
	height = btree_level_count(root);
	while (i <= height)
	{
		tree_level(root, (t_io){i, i, 0, height}, apply);
		++i;
	}
}
