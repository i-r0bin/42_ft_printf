# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rilliano <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/27 12:40:05 by rilliano          #+#    #+#              #
#    Updated: 2023/05/29 16:37:28 by rilliano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

S = src/
O = obj/
I = ./
LIBFT_PATH = ./libft/
LIBFT = $(LIBFT_PATH)/libft.a

SRC = $Sft_printf.c \
	$Sft_printchar.c \
	$Sft_printstr.c \
	$Sft_printptr.c \
	$Sft_printnbr.c \
	$Sft_printuns.c \
	$Sft_printhex.c

OBJ = $(SRC:$S%.c=$O%.o)

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -rf
RMDIR = rmdir

all:	$(NAME)

$(LIBFT):
	make -C $(LIBFT_PATH) all
	cp $@ $(NAME)

$O:
	mkdir -p $@

$(OBJ): | $O

$O%.o: $S%.c
	$(CC) $(CFLAGS) -I$I -c $^ -o $@

$(NAME): $(OBJ) $(LIBFT)
	$(AR) $@ $<

clean:
	make -C $(LIBFT_PATH) clean
	$(RM) $(OBJ)
	$(RMDIR) $O

fclean: clean
	$(RM) $(LIBFT)
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re libft

