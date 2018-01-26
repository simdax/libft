/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 10:36:35 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/26 10:50:24 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "btree.h"

int main()
{
	t_btree *head;

	head = new_btree("0");
	head->right = new_btree("1");
	head->right->left = new_btree("2");
	head->right->right = new_btree("3");
	head->right->right->left = new_btree("4");
	head->right->right->right = new_btree("5");
	head->left = new_btree("6");
	head->left->right = new_btree("7");
	head->left->left = new_btree("8");
	head->left->left->right = new_btree("9");
	head->left->left->left = new_btree("10");

	print_btree(head);
}
