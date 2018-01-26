/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 10:36:35 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/26 17:23:21 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../btree.h"

void	io(void *str, int i, int j)
{
	printf("gros prout %s %d % \n", str, i, j);
}

int		main(void)
{
	t_btree *head;

	head = new_btree("0");
	head->right = new_btree("1");
	head->right->left = new_btree("2");
	head->right->right = new_btree("3");
	head->right->right->left = new_btree("4");
	head->right->right->right = new_btree("5");
	head->left = new_btree("6");
	head->left->left = new_btree("7");
	head->left->right = new_btree("8");
	head->left->left->left = new_btree("9");
	head->left->left->right = new_btree("10");
	print_btree(head);
	btree_apply_level(head, io);
}
