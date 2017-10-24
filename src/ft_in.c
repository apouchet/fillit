/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_in.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 21:49:33 by apouchet          #+#    #+#             */
/*   Updated: 2016/12/07 17:45:55 by apouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int		sup(int nb, int size)
{
	coord[nb].x0 = 0;
	coord[nb].y0 = 0;
	nb--;
	del(nb, size);
	return (nb);
}

t_in	cp(t_in in)
{
	if (verif(in.x, in.y, in.nb))
	{
		copie(in.x, in.y, in.nb);
		in.nb++;
		in.a = 1;
	}
	in.x++;
	return (in);
}

int		ft_in(int forme, int size)
{
	t_in	in;

	in.nb = 0;
	in.x = coord[in.nb].x0;
	in.y = coord[in.nb].y0;
	while (in.nb < forme)
	{
		in.a = 0;
		while (in.y <= size && in.a != 1 && in.nb < forme)
		{
			while (in.x < size && in.nb < forme && in.a != 1)
				in = cp(in);
			in.x = 0;
			in.y++;
		}
		if (in.y >= size && in.nb && in.a == 0)
			in.nb = sup(in.nb, size);
		else if (coord[0].y[3] + in.y > size && in.nb == 0)
			return (0);
		in.x = coord[in.nb].x0;
		in.y = coord[in.nb].y0;
	}
	return (1);
}
