CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS = *.c
NAME = libft
OBJ = *.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS) -I.
	$(CC) -o $(NAME) $(OBJ) -I.

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
