CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = libftprintf.a


.PHONY: all clean fclean re

all: #$(NAME)
	$(CC) $(CFLAGS) 