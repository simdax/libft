/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstgetmax.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2018/01/09 15:17:12 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/09 15:17:58 by scornaz          ###   ########.fr       */
=======
/*   Created: 2018/01/17 17:07:01 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/17 17:07:01 by scornaz          ###   ########.fr       */
>>>>>>> cddf03c3f17e2d501e77932475d39ac8cef2f739
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

int	ft_lstgetmax(t_list *list, int val,
<<<<<<< HEAD
				int (*f)(t_list *el, int val))
{
	while (list)
	{
		val = f(list, val);
=======
				int (*f)(t_list *el, int val, void *f),
				void *opt)
{
	while (list)
	{
		val = f(list, val, opt);
>>>>>>> cddf03c3f17e2d501e77932475d39ac8cef2f739
		list = list->next;
	}
	return (val);
}
