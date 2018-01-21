/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstreduce.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 12:12:38 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/21 12:13:02 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstreduce(t_list *list, void *(*f)(void *a, void *b), void *val)
{
	void *tmp;

	while (list)
	{
		tmp = list->content;
		val = f(val, tmp);
		list = list->next;
	}
	return (val);
}
