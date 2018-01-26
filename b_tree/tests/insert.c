/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 13:54:52 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/26 17:22:45 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../btree.h"
#include "string.h"

int			mstrcmp(void *a, void *b)
{
	return (strcmp((char*)a, (char*)b));
}

int			main(void)
{
	t_btree	*head;
	t_btree	*tmp;

	head = 0;
	btree_insert(&head, "05", mstrcmp);
	btree_insert(&head, "09", mstrcmp);
	btree_insert(&head, "03", mstrcmp);
	printf("%d\n", btree_level_count(head));
	btree_insert(&head, "18", mstrcmp);
	btree_insert(&head, "07", mstrcmp);
	btree_insert(&head, "04", mstrcmp);
	btree_insert(&head, "03", mstrcmp);
	printf("%d\n", btree_level_count(head));
	print_btree(head);
	tmp = btree_search_item(head, "10", mstrcmp);
	while (1)
		;
	printf("\n%s", tmp->data);
	printf("\n%d", btree_level_count(head));
	printf("\n%d", btree_level_count(tmp));
}
