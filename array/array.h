/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 11:27:52 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/22 13:06:15 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include "../libft.h"

typedef struct	s_array
{
	void		*mem;
	size_t		size_t;
	unsigned	space;
	unsigned	cursor;
	int			size;
	int			left;
}				t_array;

t_array		*new_array();
void		free_array(t_array *array);
void		array_add(t_array *array, void *val, int len);

#endif
