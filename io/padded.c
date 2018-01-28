/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 16:06:29 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/28 13:03:28 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io.h"

t_point		get_term_size(void)
{
	struct winsize w;

	ioctl(0, STDOUT_FILENO, TIOCGWINSZ, &w);
	return ((t_point){w.ws_row, w.ws_col});
}
