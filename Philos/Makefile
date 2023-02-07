# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 18:14:30 by hmohamed          #+#    #+#              #
#    Updated: 2023/02/07 18:14:34 by hmohamed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo
SRC = philo.c 
OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -g -Wall -Wextra -Werror

LIBFT = ./libft/libft.a
all: $(NAME)

$(NAME) : $(OBJ)
	make -C libft/
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME) 
	


clean:
		rm -f *.o moves/*.o sort_alg/*.o
		make clean -C \libft

fclean: clean
		rm -f push_swap
		make fclean -C \libft
re: fclean all