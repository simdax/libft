/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */

t_list	*ft_lstsort(t_list *list, int (*cmp)(t_list*, t_list*));
int		ft_cmp_strlen(t_list *one, t_list *two);
int		ft_cmp_str(t_list *one, t_list *two);
int		ft_cmp_size(t_list *one, t_list *two);
void	ft_lstprint(t_list *el);

#endif
