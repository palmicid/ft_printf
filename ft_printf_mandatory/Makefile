# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pruangde <pruangde@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/27 20:28:10 by pruangde          #+#    #+#              #
#    Updated: 2022/06/09 15:40:19 by pruangde         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = libftprintf.a

#UTILS = utils_1.c
#LIBFT = libft_1.c

SRCS = ft_printf.c utils_1.c libft_1.c #$(UTILS) $(LIBFT)
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
    @norminette -R CheckForbiddenSourceHeader ft_*.c
    @norminette -R CheckDefine *.h
    @echo ""
    @echo "------------------------------------"