/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 21:47:39 by apouchet          #+#    #+#             */
/*   Updated: 2016/12/07 17:46:06 by apouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int		verif(int x, int y, int nb)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (yf[coord[nb].y[i] + y].xf[coord[nb].x[i] + x] == '.')
			i++;
		else
			return (0);
	}
	return (1);
}
