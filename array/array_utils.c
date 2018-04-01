/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 13:55:16 by scornaz           #+#    #+#             */
/*   Updated: 2018/04/01 16:03:16 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

void		array_for_each(t_array *array,
							void (*f)(void *el, t_array *array))
{
	unsigned	i;

	i = 0;
	while (i < array->cursor)
	{
		f(array->mem + array->type_len * i, array);
		++i;
	}
}

void		*array_find(t_array *array, int (*f)(void *el, void *data),
						void *data)
{
	unsigned	i;

	i = 0;
	while (i < array->cursor)
	{
		if (f(array->mem + array->type_len * i, data))
			return (array->mem + array->type_len * i);
		++i;
	}
	return (0);
}
