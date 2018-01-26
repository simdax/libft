/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 10:27:07 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/26 10:52:05 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "btree.h"

t_btree		*new_btree(void *data)
{
	t_btree		*ret;

	if (!(ret = malloc(sizeof(t_btree))))
		return (0);
	ret->right = 0;
	ret->left = 0;
	ret->data = data;
	return(ret);
}

void		btree_apply_prefix(t_btree *root, void (*apply)(void *data))
{
	if (root)
		apply(root->data);
	if (root->left)
		btree_apply_prefix(root->left, apply);
	if (root->right)
		btree_apply_prefix(root->right, apply);
}

void		btree_apply_postfix(t_btree *root, void (*apply)(void *data))
{
	if (root)
		apply(root->data);
	if (root->left)
		btree_apply_prefix(root->left, apply);
	if (root->right)
		btree_apply_prefix(root->right, apply);
}

void		btree_apply_infix(t_btree *root, void (*apply)(void *data))
{
	if (root->left)
	{
		btree_apply_prefix(root->left, apply);
		
	}
	if (root)
		apply(root->data);
	if (root->right)
		btree_apply_prefix(root->right, apply);
}

#include <stdio.h>

static void	print(void *data)
{
	printf("%s ", data);
}

void		print_btree(t_btree *root)
{
	btree_apply_prefix(root, print);
}
