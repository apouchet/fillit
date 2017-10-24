/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copie.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 21:47:28 by apouchet          #+#    #+#             */
/*   Updated: 2016/12/07 17:40:04 by apouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	copie(int x, int y, int forme)
{
	int i;

	i = 0;
	coord[forme].x0 = x;
	coord[forme].y0 = y;
	while (i < 4)
	{
		yf[coord[forme].y[i] + y].
			xf[coord[forme].x[i] + x] = coord[forme].lettre;
		i++;
	}
}
