NAME = libft.a
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
ft_memcpy.c ft_memmove.c ft_memset.c ft_split.c ft_strchr.c ft_strdup.c \
ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_itoa.c ft_putnbr_fd.c \
ft_strmapi.c ft_striteri.c
BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c
OBJECTS = $(SRCS:.c=.o)
BONUS_OBJECTS = $(BONUS_SRCS:.c=.o)
INCLUDE = libft.h
LIBC = ar rcs $(NAME)
CC = cc
CCFLAGS += -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(LIBC) $(OBJECTS)

%.o: %.c $(INCLUDE)
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJECTS) $(BONUS_OBJECTS)
	$(LIBC) $(OBJECTS) $(BONUS_OBJECTS)

.PHONY: all clean fclean re bonus