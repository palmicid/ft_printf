# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pruangde <pruangde@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/27 20:28:10 by pruangde          #+#    #+#              #
#    Updated: 2022/07/12 16:19:20 by pruangde         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = libftprintf.a

PFC = ft_printf.c
UTILS = utils_1.c utils_2.c
LIBFT = libft_1.c libft_2.c

SRCS = $(PFC) $(UTILS) $(LIBFT)
OBJS = $(SRCS:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

norm:
	@echo "------------------------------------"
	@echo " !!!!!!!!   NORMINETTE   !!!!!!!!"
	@echo ""
	@norminette -R CheckForbiddenSourceHeader *.c
	@norminette -R CheckDefine *.h
	@echo ""
	@echo "------------------------------------"
