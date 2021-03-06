/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 16:08:09 by scornaz           #+#    #+#             */
/*   Updated: 2018/04/01 16:08:39 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_lstsize(t_list *list)
{
	int ret;

	ret = 0;
	while (list)
	{
		++ret;
		list = list->next;
	}
	return (ret);
}
