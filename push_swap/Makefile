# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 16:14:02 by hmohamed          #+#    #+#              #
#    Updated: 2022/12/23 16:49:31 by hmohamed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC = push_swap.c
OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME) : $(OBJ)
	make -C \libft
	$(CC) $(CFLAGS) $(OBJ) libft/libft.a  -o $(NAME) 
	


clean:
		rm -f *.o
		make clean -C \libft

fclean: clean
		rm -f push_swap
		make fclean -C \libft
re: fclean all