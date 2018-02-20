# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olbondar <olbondar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/03 13:33:38 by vlevko            #+#    #+#              #
#    Updated: 2017/12/23 14:58:56 by olbondar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = fillit.c \
	error_print.c \
	fcls_free.c \
	file_doop.c \
	file_usage.c \
	file_open.c \
	file_read.c \
	file_check.c \
	dot_free.c \
	dot_malloc.c \
	tetris_doop.c \
	tetris_get_x.c \
	tetris_ultima_check.c \
	tetris_check.c \
	tetris_check_hash.c \
	tetris_free.c \
	tetris_malloc.c \
	tetris_fill.c \
	res_fillit.c \
	res_len.c \
	res_filldot.c \
	res_malloc.c \
	res_rotate_one.c \
	res_rotate_two.c \
	res_rotdot.c \
	res_fillch.c \
	res_back.c \
	res_print.c \
	res_fillalpha.c \
	res_fillit_free.c \
	ft_bzero.c \
	ft_memalloc.c \
	ft_putendl.c \
	ft_strsub.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_strnew.c

OBJ = $(SRC:.c=.o)

NAME = fillit

CFLAGS = -Wall -Wextra -Werror

CC = gcc

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(SRC)
	@echo "\033[32mBuilt fillit.\033[0m"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
