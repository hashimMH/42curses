# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 16:14:02 by hmohamed          #+#    #+#              #
#    Updated: 2023/01/19 16:44:18 by hmohamed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC = push_swap.c push_swap_utils_lst.c moves/p_s_moves_frst.c moves/p_s_moves_scnd.c sorting.c
OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -g -fsanitize=address -Wall -Wextra -Werror

LIBFT = ./libft/libft.a
all: $(NAME)

$(NAME) : $(OBJ)
	make -C libft/
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME) 
	


clean:
		rm -f *.o moves/*.o
		make clean -C \libft

fclean: clean
		rm -f push_swap
		make fclean -C \libft
re: fclean all