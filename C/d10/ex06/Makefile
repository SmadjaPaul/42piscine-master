# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/11 14:20:36 by pasmadja          #+#    #+#              #
#    Updated: 2018/11/11 14:20:37 by pasmadja         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PREFIX = ft
NAME = do-op
SRC_DIR = srcs
INC_DIR = includes

$(NAME): all

all:
	gcc -Werror -Wall -Wextra $(SRC_DIR)/cli.c $(SRC_DIR)/$(PREFIX)_*.c \
	-I$(INC_DIR) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
