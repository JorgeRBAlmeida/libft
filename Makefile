SRCS	= ft_strchr.c ft_bzero.c ft_strnstr.c \
		ft_isprint.c ft_atoi.c ft_toupper.c ft_tolower.c \
		ft_strlcpy.c ft_memset.c ft_calloc.c ft_strlen.c \
		ft_isascii.c ft_strlcat.c ft_memcmp.c ft_isdigit.c \
		ft_strrchr.c ft_isalpha.c ft_strncmp.c ft_isalnum.c \
		ft_memcpy.c ft_memmove.c ft_strdup.c ft_memchr.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
		ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCB	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
		ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
		ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS	= ${SRCS:.c=.o}

OBJB	= ${SRCB:.c=.o}

NAME	= libft

RM		= rm -f

CC		= cc

AR		= ar rcs

ARB		= ar qs

L		= -L. -lft

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS} lib bonus

lib:		${OBJS}
			${AR} ${NAME}.a ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS} ${OBJB}

fclean:		clean
			${RM} ${NAME} ${NAME}.a

re:			fclean all

bonus:		${OBJB}
			${ARB} ${NAME}.a ${OBJB}


.PHONY:		all lib clean fclean re bonus