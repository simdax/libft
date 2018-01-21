/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstgetmax.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 15:17:12 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/09 15:17:58 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

int	ft_lstgetmax(t_list *list, int val,
				int (*f)(t_list *el, int val))
{
	while (list)
	{
		val = f(list, val);
		list = list->next;
	}
	return (val);
}
