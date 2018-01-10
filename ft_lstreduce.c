/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstreduce.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 16:12:40 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/10 10:12:03 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstreduce(t_list *list, void (*f)(void *a, t_list *b), void *val)
{
	while (list)
	{
		f(val, list);
		list = list->next;
	}
}
