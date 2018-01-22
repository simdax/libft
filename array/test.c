/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 11:33:11 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/22 12:41:02 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

int			main(void)
{
	char		add[3] = "oi ";
	char		add2[3] = "qi ";
	ti_array 	*array = new_iarray(sizeof(char), 64);
	int			i = 500;
	
	while (i--)
	{
		iarray_add(array, add, 3);
		iarray_add(array, add2, 3);
	}
	iarray_add(array, "\0", 1);
	ft_putstr(array->mem);
	free_iarray(&array);
}
