/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 21:50:13 by apouchet          #+#    #+#             */
/*   Updated: 2016/12/13 16:07:39 by acombe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	solver(int forme)
{
	int		size;
	int		x;
	int		y;
	int		bo;
	int		nb;

	x = 0;
	y = 0;
	bo = 0;
	nb = 0;
	size = ft_sqrt(forme * 4);
	ft_init(size);
	while (bo == 0)
	{
		ft_init(size);
		bo = ft_in(forme, size);
		if (bo == 0)
		{
			size++;
			zzz(forme);
		}
	}
	affich(size);
}
