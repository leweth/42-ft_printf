CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putpercent.c ft_putaddress.c ft_puthexa.c

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a


%.o: %.c ft_printf.h
	${CC} ${CFLAGS} -c $< -o $@


${NAME}: ${OBJS} 
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: clean fclean bonus ${NAME}