NAME = libft.a
SRCS = ft_atoi.c ft_bzero.c ft_isascii.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlcpy.c ft_strlen.c ft_tolower.c ft_toupper.c
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
