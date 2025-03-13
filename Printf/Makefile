# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/04 14:51:02 by luferna3          #+#    #+#              #
#    Updated: 2025/02/10 20:35:03 by luferna3         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS = ft_printf.c ft_utils2.c ft_utils.c ft_hex_utils.c ft_num_utils.c
OBJ_FILES = $(SRCS:.c=.o)

$(NAME): $(OBJ_FILES)
	ar -rc $(NAME) $(OBJ_FILES)
	
%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

all: $(NAME)

.PHONY: all clean fclean re