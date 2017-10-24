/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 16:47:03 by apouchet          #+#    #+#             */
/*   Updated: 2016/12/13 16:21:57 by acombe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

void			zzz(int forme);

char			*ft_strncpy(char *dst, const char *src, size_t len);

size_t			ft_strlen(const char *s);

char			**get_all_forms(char *str);

int				ft_is_allowed_form(char *texte);

void			del(int forme, int size);

void			copie(int x, int y, int forme);

int				verif(int x, int y, int nb);

int				ft_in(int forme, int size);

void			ft_init(int size);

void			affich(int size);

void			ft_trie(char *str);

void			solver(int forme);

void			ft_zero(int forme);

int				ft_read(char *str);

int				ft_sqrt(int nb);

int				ft_putchar(int c);

void			ft_putstr(char *str);

typedef struct	s_coordonne
{
	char		lettre;
	int			x0;
	int			y0;
	int			x[4];
	int			y[4];
}				t_coordonne;

struct s_coordonne coord[26];

typedef struct	s_final
{
	char		xf[13];
}				t_final;

struct s_final yf[13];

typedef struct	s_in
{
	int x;
	int y;
	int nb;
	int a;
}				t_in;

typedef struct	s_trie
{
	int x;
	int y;
	int forme;
	int nb;
	int i;
}				t_trie;

#endif
