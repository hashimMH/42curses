# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 16:14:02 by hmohamed          #+#    #+#              #
#    Updated: 2022/12/23 16:14:04 by hmohamed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC = push_swap.c
OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ)  -o $(NAME) 


clean:
		rm -f *.o

fclean: clean
		rm -f push_swap
re: fclean all