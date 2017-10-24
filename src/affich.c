/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affich.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 21:50:01 by apouchet          #+#    #+#             */
/*   Updated: 2016/12/07 18:03:55 by apouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	affich(int size)
{
	int i;
	int x;
	int y;

	i = 0;
	x = 0;
	y = 0;
	while (y <= size)
	{
		while (x <= size && yf[y].xf[x] != '\0')
		{
			if (yf[y].xf[x] == '\0')
				return ;
			ft_putchar(yf[y].xf[x]);
			x++;
		}
		x = 0;
		y++;
	}
	return ;
}
