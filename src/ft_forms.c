/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_forms.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 15:56:17 by acombe            #+#    #+#             */
/*   Updated: 2016/12/10 18:19:27 by apouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static int			ft_letter_touch(char *form)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (form[i])
	{
		if (form[i] == '#' && j < 3)
		{
			if (form[i + 5] != '#' && form[i + 1] != '#')
				if (!(form[i - 1] == '#' &&
							(form[i + 4] == '#' || form[i - 2] == '#')))
					return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int			ft_nb_letter(char *form)
{
	int		j;
	int		i;

	j = 0;
	i = 0;
	while (form[j])
	{
		if (form[j] == '#')
			i++;
		j++;
	}
	if (i == 4)
		return (1);
	return (0);
}

int					ft_is_allowed_form(char *texte)
{
	int		i;
	int		j;
	char	**forms;

	j = 0;
	forms = get_all_forms(texte);
	while (forms[j])
	{
		i = 0;
		if (!(forms[j][4] == '\n' &&
				forms[j][9] == '\n' && forms[j][14] == '\n'))
			return (0);
		if (ft_nb_letter(forms[j]) != 1 || ft_letter_touch(forms[j]) != 1)
			return (0);
		while (forms[j][i] && i < 19)
		{
			if (forms[j][i] != '#' && forms[j][i] != '.' && forms[j][i] != '\n')
				return (0);
			if (forms[j][i] == '\n' && i != 4 && i != 9 && i != 14)
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}
