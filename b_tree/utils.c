/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 17:21:20 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/26 17:25:42 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "btree.h"
#include <stdio.h>

t_btree		*new_btree(void *data)
{
	t_btree		*ret;

	if (!(ret = malloc(sizeof(t_btree))))
		return (0);
	ret->right = 0;
	ret->left = 0;
	ret->data = data;
	return (ret);
}

void		print_btree(t_btree *root)
{
	t_func f;

	printf("gauche\n");
	btree_apply_left(root, print);
	printf("droite\n");
	btree_apply_right(root, print);
}
