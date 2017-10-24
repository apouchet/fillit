/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 21:47:15 by apouchet          #+#    #+#             */
/*   Updated: 2016/12/07 17:40:36 by apouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	del(int nb, int size)
{
	int i;
	int x;
	int y;

	x = 0;
	y = 0;
	i = 0;
	while (y < size)
	{
		while (x < size)
		{
			if (yf[y].xf[x] == coord[nb].lettre)
				yf[y].xf[x] = '.';
			x++;
		}
		x = 0;
		y++;
	}
	i = 0;
	coord[nb].x0 += 1;
	coord[nb + 1].x0 = 0;
	coord[nb + 1].y0 = 0;
}
