# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/21 14:27:54 by hmohamed          #+#    #+#              #
#    Updated: 2022/12/21 14:28:24 by hmohamed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = client
NAME1 = server
NAME2 = client_bonus
NAME3 = server_bonus
SRC = client.c
SRC1 = server.c
SRC2 = client_bonus.c
SRC3 = server_bonus.c
OBJ = $(SRC:.c=.o)
OBJ1 = $(SRC1:.c=.o)
OBJ2 = $(SRC2:.c=.o)
OBJ3 = $(SRC3:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror


all: $(NAME) $(NAME1)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ)  -o $(NAME) 

$(NAME1) : $(OBJ1)
	$(CC) $(CFLAGS) $(OBJ1) -o $(NAME1) 

bonus:$(NAME2) $(NAME3)

$(NAME2) : $(OBJ2)
	$(CC) $(CFLAGS) $(OBJ2)  -o $(NAME2) 

$(NAME3) : $(OBJ3)
	$(CC) $(CFLAGS) $(OBJ3) -o $(NAME3) 

clean:
		rm -f *.o

fclean: clean
		rm -f client server server_bonus client_bonus
re: fclean all