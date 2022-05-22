SRCS	= ft_strchr.c ft_bzero.c ft_strnstr.c \
		ft_isprint.c ft_atoi.c ft_toupper.c ft_tolower.c \
		ft_strlcpy.c ft_memset.c ft_calloc.c ft_strlen.c \
		ft_isascii.c ft_strlcat.c ft_memcmp.c ft_isdigit.c \
		ft_strrchr.c ft_isalpha.c ft_strncmp.c ft_isalnum.c \
		ft_memcpy.c ft_memmove.c ft_strdup.c ft_memchr.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
		ft_itoa.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft

RM		= rm -f

CC		= cc

AR		= ar rc

L		= -L. -lft

RLIB	= ranlib

# ar rc nomelib.a ft_funcs.o
# cc -Wall -Wetra -Werror main.c -L. -lft
#ranlib libft.a
# $(NAME):	${OBJS} lib
# 			${CC} -o ${NAME} ${OBJS}

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS} lib rlib
			${CC} ${CFLAGS} -o ${NAME}.out main.c ${L}

lib:		${OBJS}
			${AR} ${NAME}.a ${OBJS}

rlib:		${NAME}.a
			${RLIB} ${NAME}.a

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME} ${NAME}.a ${NAME}.out

re:			fclean all

.PHONY:		all lib rlib clean fclean re