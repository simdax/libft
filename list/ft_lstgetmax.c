/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstgetmax.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simdax </var/spool/mail/simdax>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 17:45:36 by simdax            #+#    #+#             */
/*   Updated: 2018/01/11 19:41:34 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

int	ft_lstgetmax(t_list *list, int val,
				 int (*f)(t_list *el, int val, void *f),
				 void *opt)
{
	while (list)
	{
		val = f(list, val, opt);
		list = list->next;
	}
        return (val);
}
