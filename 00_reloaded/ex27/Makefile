# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpujades <cpujades@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 00:55:05 by cpujades          #+#    #+#              #
#    Updated: 2023/09/12 00:55:09 by cpujades         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = main.c

OFILES = main.o

all : $(NAME)


$(NAME) :
	gcc -Wall -Wextra -Werror -c $(SRC)
	gcc -o $(NAME) $(OFILES)

clean :
	rm -f $(OFILES)

fclean : clean
	rm -f $(NAME)

re : fclean all
