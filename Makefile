
SRCS	= ft_strlen.c ft_strlcpy.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_bzero.c ft_memset.c ft_memcpy.c ft_memmove.c ft_atoi.c ft_memcmp.c ft_memchr.c ft_memccpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strdup.c ft_calloc.c \
		ft_substr.c ft_strnstr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c
OBJS	= ${SRCS:.c=.o}

NAME	= libft.a
SONAME	= libft.so

LIB		= ar rc

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			${LIB} ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME} ${SONAME}

re:			fclean all

so:
			$(CC) -shared -o $(SONAME) $(OBJS) -lm
