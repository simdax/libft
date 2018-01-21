/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2018/01/09 15:17:34 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/09 15:17:34 by scornaz          ###   ########.fr       */
=======
/*   Created: 2018/01/17 17:05:41 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/17 17:06:12 by scornaz          ###   ########.fr       */
>>>>>>> cddf03c3f17e2d501e77932475d39ac8cef2f739
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

int	ft_cmp_strlen(t_list *one, t_list *two)
{
	return (ft_strlen(one->content) < ft_strlen(two->content));
}

int	ft_cmp_str(t_list *one, t_list *two)
{
<<<<<<< HEAD
	return (ft_strcmp(one->content, two->content));
}

int	ft_cmp_size(t_list *one, t_list *two)
{
=======
	return (ft_strcmp(one->content, two->content) > 0);
}

int	ft_cmp_rstr(t_list *one, t_list *two)
{
	return (ft_strcmp(one->content, two->content));
}

int	ft_cmp_size(t_list *one, t_list *two)
{
>>>>>>> cddf03c3f17e2d501e77932475d39ac8cef2f739
	return (one->content > two->content);
}
