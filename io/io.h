/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 12:50:05 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/28 13:27:09 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IO_H
# define IO_H

# include "libft.h"
# include <sys/ioctl.h>
# include <ncurses.h>

t_point		get_term_size(void);
void		clear_screen();

#endif
