/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2018/01/21 12:13:19 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/21 12:13:20 by scornaz          ###   ########.fr       */
=======
/*   Created: 2018/01/17 17:13:51 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/17 17:13:51 by scornaz          ###   ########.fr       */
>>>>>>> cddf03c3f17e2d501e77932475d39ac8cef2f739
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	while (lst)
	{
		f(lst);
		lst = lst->next;
	}
}

void	ft_lstiter2(t_list *lst, void (*f)(t_list *elem, void *args), void *mem)
{
	while (lst)
	{
		f(lst, mem);
		lst = lst->next;
	}
}
