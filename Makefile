CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS = *.c
NAME = libft
OBJ = *.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS) -I.
	ar rc libft.a $(OBJ)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -shared -o libft.so $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f libft.a libft.so a.out

re: fclean all
