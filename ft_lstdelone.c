/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2018/01/21 12:12:16 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/21 12:12:16 by scornaz          ###   ########.fr       */
=======
/*   Created: 2018/01/17 17:13:26 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/17 17:13:26 by scornaz          ###   ########.fr       */
>>>>>>> cddf03c3f17e2d501e77932475d39ac8cef2f739
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	if (*alst)
		del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
