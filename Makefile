# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apouchet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/03 15:58:43 by apouchet          #+#    #+#              #
#    Updated: 2016/12/14 20:56:28 by apouchet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = src/affich.c src/del.c src/copie.c src/ft_forms.c src/ft_in.c \
	  src/ft_init.c src/ft_putchar.c src/ft_read.c src/ft_putstr.c \
	  src/ft_sqrt.c src/ft_strlen.c src/ft_strncpy.c src/ft_trie.c \
	  src/ft_zero.c src/get_all_forms.c src/main.c src/solver.c \
	  src/verif.c src/zzz.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	gcc -Wall -Werror -Wextra -o $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
