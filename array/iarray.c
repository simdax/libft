/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 10:27:13 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/22 12:41:54 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

ti_array	*new_iarray(size_t size, unsigned space)
{	
	ti_array *array;
	
	array = malloc(sizeof(*array));
	array->size_t = size;
	array->space = space;
	array->size = 0;
	array->mem = 0;
	array->cursor = 0;
	return (array);
}

void		free_iarray(ti_array **array)
{
	free((*array)->mem);
//	free(*array);
}

static void	iarray_realloc(ti_array *array, size_t len)
{
	void	*tmp;
	size_t	new_size;

	new_size = 0;
	tmp = array->mem;
	while (new_size < len)
		new_size += array->space;
	array->size += new_size;
	array->mem = malloc(array->size_t * array->size);
	if (tmp)
		ft_memcpy(array->mem, tmp, array->size_t * array->size);
	free(tmp);
}
	
void		iarray_add(ti_array *array, void *val, int len)
{
	if ((int)array->size - len < 0)
		iarray_realloc(array, len);	
	ft_memcpy(array->mem + array->size_t * array->cursor, val, array->size_t * len);
	array->cursor += len;
}
