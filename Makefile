
OBJS_C		= ${SRCS_C:.c=.o}
OBJS_B		= ${SRCS_B:.c=.o}
INC			= includes
FLAGS		= -Wall -Werror -Wextra
LIB			= ar rc
CC			= gcc
RM			= rm -f
NAME		= libft.a
SRCS_C		= ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c\
			  ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c\
			  ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c\
			  ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
			  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRCS_B		= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c
.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${INC}

all:		${NAME}

${NAME}:	${OBJS_C}
			${LIB} ${NAME} ${OBJS_C}

bonus:		${OBJS_C} ${OBJS_B}
			${LIB} ${NAME} ${OBJS_C} ${OBJS_B}
		

clean:		
			${RM} ${OBJS_C} ${OBJS_B}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
