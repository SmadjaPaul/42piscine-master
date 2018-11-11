# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/11 14:16:59 by pasmadja          #+#    #+#              #
#    Updated: 2018/11/11 14:17:00 by pasmadja         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PREFIX = ft
NAME = lib$(PREFIX).a
SRC_DIR = srcs
INC_DIR = includes

$(NAME): all

all:
	gcc -Werror -Wall -Wextra -c $(SRC_DIR)/$(PREFIX)_*.c -I$(INC_DIR)
	ar rcs $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
