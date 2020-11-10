
SRCS	= ft_strlen.c ft_strlcpy.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_bzero.c ft_memset.c ft_memcpy.c ft_memmove.c ft_atoi.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

LIB		= ar rc

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror -std=c99

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${LIB} ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
