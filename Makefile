CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS = *.c
NAME = libft.a
OBJ = *.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS) -I.
	ar rc $(NAME) $(OBJ)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	$(CC) -shared -o libft.so $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f libft.so a.out

re: fclean all
