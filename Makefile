NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = *.c libft.h
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OJS) -o $(NAME)

%.o: %.c
	&(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclena: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
