# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pruangde <pruangde@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/27 20:28:10 by pruangde          #+#    #+#              #
#    Updated: 2022/07/21 20:47:00 by pruangde         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = libftprintf.a

PFC = ft_printf.c ft_printf_2.c
UTILS = utils_1.c utils_2.c utils_3.c
LIBFT = libft_1.c libft_2.c
CONV = convert_1.c

SRCS = $(PFC) $(UTILS) $(LIBFT) $(CONV)
OBJS = $(SRCS:.c=.o)

.PHONY: all clean fclean re

bonus: all

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

test:
	$(CC) *.c
