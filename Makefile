# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/18 17:30:09 by tguimara          #+#    #+#              #
#    Updated: 2021/06/01 18:13:32 by tguimara         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./src/ft_memset.c ./src/ft_bzero.c ./src/ft_memcpy.c ./src/ft_memccpy.c ./src/ft_memmove.c \
./src/ft_memchr.c ./src/ft_memcmp.c ./src/ft_strlen.c ./src/ft_strlcpy.c ./src/ft_strlcat.c \
./src/ft_strchr.c ./src/ft_strrchr.c ./src/ft_strnstr.c ./src/ft_strncmp.c ./src/ft_atoi.c \
./src/ft_isalpha.c ./src/ft_isdigit.c ./src/ft_isalnum.c ./src/ft_isascii.c ./src/ft_isprint.c \
./src/ft_toupper.c ./src/ft_tolower.c ./src/ft_calloc.c ./src/ft_strdup.c ./src/ft_substr.c \
./src/ft_strjoin.c ./src/ft_strtrim.c ./src/ft_split.c ./src/ft_itoa.c ./src/ft_strmapi.c \
./src/ft_putchar_fd.c ./src/ft_putstr_fd.c ./src/ft_putendl_fd.c ./src/ft_putnbr_fd.c

SRC_BONUS = $(wildcard ./src/ft_lst*.c)

OBJECTS = ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o \
ft_memchr.o ft_memcmp.o ft_strlen.o ft_strlcpy.o ft_strlcat.o \
ft_strchr.o ft_strrchr.o ft_strnstr.o ft_strncmp.o ft_atoi.o \
ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o \
ft_toupper.o ft_tolower.o ft_calloc.o ft_strdup.o ft_substr.o \
ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o ft_strmapi.o \
ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o

BONUS_OBJ = ft_lstnew.o ft_lstadd_front.o ft_lstsize.o ft_lstlast.o ft_lstadd_back.o \
ft_lstdelone.o ft_lstclear.o ft_lstiter.o ft_lstmap.o

INCLUDE = libft.h

all: $(NAME)

$(NAME):
	@gcc -c -Wall -Wextra -Werror $(SRC) -I $(INCLUDE)
	@ar rcs $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME) *.o

bonus: $(NAME)
	@gcc -c -Wall -Wextra -Werror $(SRC_BONUS) -I $(INCLUDE)
	@ar rcs $(NAME) $(BONUS_OBJ)

re: fclean all