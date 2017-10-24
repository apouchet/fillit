/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 21:55:14 by apouchet          #+#    #+#             */
/*   Updated: 2016/12/13 16:21:29 by acombe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int		main(int argc, char **argv)
{
	int num;

	num = 0;
	if (argc == 2)
		num = ft_read(argv[1]);
	else
		ft_putstr("usage : ./fillit source_file");
	if (num != 0)
		ft_putstr("error\n");
	return (0);
}
