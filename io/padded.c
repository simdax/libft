/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 16:06:29 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/28 13:48:02 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io.h"

/* t_point		get_term_size(void) */
/* { */
/* 	struct winsize w; */

/* 	ioctl(0, STDOUT_FILENO, TIOCGWINSZ, &w); */
/* 	return ((t_point){w.ws_col, w.ws_row}); */
/* } */

#include <string.h>
#include <errno.h>

t_point		 get_term_size(void)
{
  struct winsize ws;

  if ( ioctl( STDIN_FILENO , TIOCGWINSZ, &ws ) != 0 &&
       ioctl( STDOUT_FILENO, TIOCGWINSZ, &ws ) != 0 &&
       ioctl( STDERR_FILENO, TIOCGWINSZ, &ws ) != 0 )
  {
    printf("ioctl() failed (%d): %s\n", errno, strerror( errno ) );
    return ((t_point){0, 0});
  }
  return ((t_point){ws.ws_col, ws.ws_row}); 
}

inline void	clear_screen()
{
	system("clear");
}
