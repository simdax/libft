/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2017/11/10 19:22:23 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/21 12:10:34 by scornaz          ###   ########.fr       */
=======
/*   Created: 2018/01/17 17:13:17 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/17 17:13:17 by scornaz          ###   ########.fr       */
>>>>>>> cddf03c3f17e2d501e77932475d39ac8cef2f739
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}

void	ft_lstaddlast(t_list **list, t_list *new)
{
	t_list *head;

	head = *list;
	if (head)
	{
		while (head->next)
			head = head->next;
		head->next = new;
	}
	else
		*list = new;
}
