NAME = libft.a
SRCS = $(wildcard ft_*.c)
OBJECTS = $(SRCS:.c=.o)
INCLUDE = libft.h
LIBC = ar rcs $(NAME)
CC = gcc
CCFLAGS += -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(LIBC) $(OBJECTS)

%.o: %.c $(INCLUDE)
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
