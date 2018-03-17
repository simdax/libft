/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:08:37 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/13 15:16:44 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_blank(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char		*ft_strtrim(char const *s)
{
	int		start;
	int		end;

	start = 0;
	end = 0;
	while (is_blank(s[start]))
		++start;
	while (s[end])
	  ++end;
	if (start == end)
	  return (ft_strdup(""));
	while (is_blank(s[end - 1]))
	  --end;
	return(ft_strsub(s, start, end - start));
}
