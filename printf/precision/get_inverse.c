/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_inverse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 19:33:18 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/27 19:44:14 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main()
{
	char *r = "0,1000";
	int res = 0;
	while (*r)
	{
		res = *r - '0' + res * 2;
		++r;
	}
	printf("%d", res);
}

