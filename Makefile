NAME = libftprintf.a

CC = clang

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_printchar.c ft_printstr.c ft_printp ft_printnbr.c

OBJS = $(SRCS:.c=.o)

HEADER = ./

.c.o:
	@$(CC) $(CFLAGS) -I $(HEADER) -c $< -o $@

$(NAME): $(OBJS)
	@ar cr $(NAME) $(OBJS)

all: $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re:
	fclean all

.PHONY: clean fclean re all