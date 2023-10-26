SRCS	=	ft_printf.c ft_utils.c ft_check_form.c

OBJS	=	${SRCS:.c=.o}

NAME	=	libftprintf.a

AR		=	ar rcs

CC		=	cc

RM		=	rm -f

CFLAGS	=	-Wall -Werror -Wextra

all: $(NAME)

$(OBJS): %.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re