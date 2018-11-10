# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaelee <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 17:30:16 by jaelee            #+#    #+#              #
#    Updated: 2018/11/10 13:00:52 by jaelee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./libc/ft_*.c ./add/ft_*.c
FLAG = -Wall -Wextra -Werror
OBJ = ./*.o
HEADER = -I ./includes

all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(SRC) $(HEADER)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
