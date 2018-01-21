/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 15:17:34 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/09 15:17:34 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

int	ft_cmp_strlen(t_list *one, t_list *two)
{
	return (ft_strlen(one->content) < ft_strlen(two->content));
}

int	ft_cmp_str(t_list *one, t_list *two)
{
	return (ft_strcmp(one->content, two->content));
}

int	ft_cmp_size(t_list *one, t_list *two)
{
	return (one->content > two->content);
}
