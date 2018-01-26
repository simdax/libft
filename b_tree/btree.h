/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 10:26:06 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/26 10:45:42 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTREE_H
# define BTREE_H

#include "stdlib.h"

typedef struct		s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*data;
}					t_btree;

t_btree		*new_btree(void *data);
void		btree_apply_prefix(t_btree *root, void (*apply)(void *data));
void		print_btree(t_btree *root);

#endif
