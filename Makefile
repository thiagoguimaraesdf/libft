# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/18 17:30:09 by tguimara          #+#    #+#              #
#    Updated: 2021/05/18 17:30:09 by tguimara         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = $(wildcard ./src/*.c)

OBJECTS = *.o

INCLUDE = libft.h

all: $(NAME)

$(NAME):
	@gcc -c -Wall -Wextra -Werror $(SRC) -I./include $(INCLUDE)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME) *.exe

run:
	@gcc -Wall -Wextra -Werror ./tests/$(ARGS).c -o $(ARGS) -L. $(NAME) -I./include && ./$(ARGS).exe

re: fclean all