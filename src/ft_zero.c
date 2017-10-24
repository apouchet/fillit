/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 21:50:32 by apouchet          #+#    #+#             */
/*   Updated: 2016/12/07 17:41:36 by apouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_zero(int forme)
{
	int i;

	i = 0;
	coord[forme].x0 = coord[forme].x[0];
	coord[forme].y0 = coord[forme].y[0];
	while (i < 4)
	{
		coord[forme].x[i] = coord[forme].x[i] - coord[forme].x0;
		coord[forme].y[i] = coord[forme].y[i] - coord[forme].y0;
		i++;
	}
	coord[forme].x0 = 0;
	coord[forme].y0 = 0;
}
