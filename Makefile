NAME = libft.a
CC = cc
AR = ar
CCFLAGS = -c -Wall -Werror -Wextra
ARFLAGS = rcs

all:
	$(CC) $(CCFLAGS) *.c
	$(AR) $(ARFLAGS) $(NAME) *.o

clean:
	rm *.o

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: clean fclean re