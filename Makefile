NAME = libft
CC = cc
FLAGS = -Wall -Wextra -Werror

all:
	@echo "Compiling program"
	$(CC) $(FLAGS) main.c ft_memset.c -o $(NAME).a

#.PHONY: clean fclean re

#clean:

#fclean:

#re: