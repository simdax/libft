/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simdax </var/spool/mail/simdax>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 14:47:28 by simdax            #+#    #+#             */
/*   Updated: 2018/01/11 10:07:17 by simdax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

int ft_cmp_strlen(t_list *one, t_list *two)
{
  return (ft_strlen(one->content) < ft_strlen(two->content));
}

int ft_cmp_str(t_list *one, t_list *two)
{
  //return (ft_strcmp(two->content, one->content));
  return (ft_strcmp(one->content, two->content) > 0);
}

int ft_cmp_rstr(t_list *one, t_list *two)
{
  return (ft_strcmp(one->content, two->content));
}

int ft_cmp_size(t_list *one, t_list *two)
{
  return (one->content > two->content);
}
