/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 17:28:37 by apouchet          #+#    #+#             */
/*   Updated: 2016/12/05 21:33:05 by apouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int		ft_sqrt(int nb)
{
	int resultat;
	int add;
	int total;

	add = 1;
	total = 1;
	resultat = 1;
	while (total < nb)
	{
		add = add + 2;
		total = total + add;
		resultat++;
	}
	return (resultat);
}
