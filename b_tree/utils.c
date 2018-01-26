/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 17:21:20 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/26 19:43:47 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "btree.h"
#include <stdio.h>

t_btree			*new_btree(void *data)
{
	t_btree		*ret;

	if (!(ret = malloc(sizeof(t_btree))))
		return (0);
	ret->right = 0;
	ret->left = 0;
	ret->data = data;
	return (ret);
}

void			print(void *str, int depth, int rank)
{
	if (!rank)
		printf("\n");
	printf("%*s%*s ", 40 - depth * 8, "", rank * 5, (char*)str);
}

inline void		print_btree(t_btree *root)
{
	btree_apply_level(root, print);
}
