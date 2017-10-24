/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_all_forms.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 00:04:24 by acombe            #+#    #+#             */
/*   Updated: 2016/12/06 22:26:17 by apouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

char	**get_all_forms(char *str)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	**tab;

	i = 0;
	j = 0;
	k = 0;
	l = (ft_strlen(str) / 21 + 2);
	if (!(tab = (char**)malloc(sizeof(char*) * l)))
		return (NULL);
	while (l > 1 && str[j])
	{
		if (!(tab[i] = (char*)malloc(sizeof(char) * 20)))
			return (NULL);
		tab[i] = ft_strncpy(tab[i], &str[j], 19);
		tab[i][20] = '\0';
		j = j + 21;
		l--;
		i++;
	}
	tab[i] = (NULL);
	return (tab);
}
