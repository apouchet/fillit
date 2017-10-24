/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 21:50:50 by apouchet          #+#    #+#             */
/*   Updated: 2016/12/13 16:22:23 by acombe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int		ft_read(char *str)
{
	size_t	op;
	size_t	rd;
	char	buf[700];
	int		i;

	i = 0;
	if (!(op = open(str, O_RDONLY)))
		return (5);
	if (!(rd = read(op, buf, 699)))
		return (5);
	if (ft_is_allowed_form(buf) != 1 || rd < 19 || rd > 550)
		return (5);
	if (rd % 21 != 20 && rd >= 21)
		return (5);
	ft_trie(buf);
	return (0);
}
