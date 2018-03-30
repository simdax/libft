/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:05:47 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/16 17:59:44 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*ptr;

	if (!(ptr = malloc(size)))
		return (NULL);
	while (size--)
		((char*)ptr)[size] = 0;
	return (ptr);
}

void		ft_malloc(void **ptr, size_t size)
{
	if (!(*ptr = malloc(size)))
	  MALLOC_ERROR;
}
