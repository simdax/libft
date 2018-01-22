/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 11:27:52 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/22 12:41:28 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libft.h"

typedef struct	si_array
{
	void		*mem;
	size_t		size_t;
	unsigned	space;
	unsigned	cursor;
	int			size;
	int			left;
}				ti_array;

ti_array	*new_iarray();
void		free_iarray(ti_array **array);
void		iarray_add(ti_array *array, void *val, int len);
