# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 21:27:37 by lcorinna          #+#    #+#              #
#    Updated: 2021/11/14 12:57:42 by lcorinna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIST_1 = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c \
ft_substr.c ft_tolower.c ft_toupper.c

O_FILES = $(LIST_1:.c=.o)

all: $(NAME)

$(NAME): $(O_FILES)
	ar rc $(NAME) $?

%.o: %.c libft.h Makefile
	gcc -Wall -Wextra -Werror -c $< -o $@

clean:
		rm -f $(O_FILES)
	
fclean: clean
		rm -rf $(NAME)
	
re: fclean $(NAME)

.PHONY: all clean fclean re