/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trie.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 21:50:40 by apouchet          #+#    #+#             */
/*   Updated: 2016/12/13 16:06:56 by acombe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_trie	bz(t_trie trie)
{
	trie.x = 0;
	trie.y = 0;
	trie.i = 0;
	trie.forme = 0;
	trie.nb = 0;
	return (trie);
}

t_trie	up_two(t_trie trie)
{
	ft_zero(trie.forme);
	trie.nb = 0;
	trie.forme++;
	return (trie);
}

t_trie	up_one(t_trie trie)
{
	trie.x++;
	trie.i++;
	return (trie);
}

int		trie_2(int forme, int nb, int x, int y)
{
	coord[forme].lettre = 65 + forme;
	coord[forme].x[nb] = x;
	coord[forme].y[nb] = y;
	nb++;
	return (nb);
}

void	ft_trie(char *str)
{
	t_trie trie;

	trie.x = 0;
	trie = bz(trie);
	while (str[trie.i])
	{
		while (str[trie.i] != '\n')
		{
			if (str[trie.i] != '.')
			{
				trie.nb = trie_2(trie.forme, trie.nb, trie.x, trie.y);
				str[trie.i] = coord[trie.forme].lettre;
			}
			trie = up_one(trie);
		}
		trie.x = 0;
		trie.y++;
		trie.i++;
		if (trie.nb == 4)
			trie = up_two(trie);
	}
	solver(trie.forme);
}
