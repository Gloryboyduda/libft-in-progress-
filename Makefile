NAME = libft.a
SRCS = (addsuffix .c/ ft_atoi ft_bzero ft_iascii ft_isalnum ft_isalpha ft_isdigit ft_isprint ft_memset ft_strlcpy ft_strlen ft_tolower ft_toupper)
INCLUDES = libft.h
OBJECTS = $(SRCS:.c:.o)
LIBC = ar rcs $(NAME)
CC = gcc
CCFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(INCLUDES)
	$(LIBC) $(OBJECTS)

%.o: .c $(OBJECTS)
	
