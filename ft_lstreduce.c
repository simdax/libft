/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstreduce.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2018/01/21 12:12:38 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/21 12:13:02 by scornaz          ###   ########.fr       */
=======
/*   Created: 2017/12/08 16:12:40 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/17 17:14:10 by scornaz          ###   ########.fr       */
>>>>>>> cddf03c3f17e2d501e77932475d39ac8cef2f739
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstreduce(t_list *list, void (*f)(void *a, t_list *b, void *opts),
					void *val, void *opts)
{
	while (list)
	{
		f(val, list, opts);
		list = list->next;
	}
<<<<<<< HEAD
	return (val);
=======
>>>>>>> cddf03c3f17e2d501e77932475d39ac8cef2f739
}
