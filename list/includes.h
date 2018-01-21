/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 16:47:04 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/21 16:47:48 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_H
#define INCLUDES_H

#include "../libft.h"

t_list	*ft_lstsort(t_list *list, int (*cmp)(t_list*, t_list*));
int		ft_cmp_strlen(t_list *one, t_list *two);
int		ft_cmp_str(t_list *one, t_list *two);
int		ft_cmp_size(t_list *one, t_list *two);
void	ft_lstprint(t_list *el);

#endif
