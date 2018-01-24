/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 11:40:21 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/24 12:13:21 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <stdarg.h>
# include "array/array.h"
# include "unicode/unicode.h"
# include "list/includes.h"
# include "gnl/get_next_line.h"
# include "list/includes.h"
# include "string/ft_string.h"
# include "mem/mem.h"
# include "print/print.h"

int				ft_abs(int value);
int				ft_notneg(int value);
size_t			ft_nbrsize(int nbr);
int				ft_atoi(const char *str);
char			*ft_itoa(int n);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_issep(char c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
void			ft_putchar(char c);
void			ft_putstr(char const *s);
char			*ft_strrm(char const *s, char c, size_t n);
void			ft_putendl(char const *s);
void			ft_putnbr(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const*s, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_utf8(int *str);
int				ft_putchar_utf8(int str);

unsigned int	ft_fact(unsigned int nb);
char			**ft_all_perms(char *s);
char			*ft_swapchar(char *s, int ind1, int ind2);
char			*ft_rotate(const char *s, int rotation);
void			ft_print_2d(char **matrix);
void			ft_print_len(int len, int *data);

int				ft_max(int one, int two);
int				ft_min(int one, int two);

#endif
