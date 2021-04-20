NAME		= libft.a

SRCS		=	main.c ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
				ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memcpy.c ft_memchr.c ft_memcmp.c \
				ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c \
				ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
				ft_itoa.c ft_strtrim.c ft_substr.c ft_strjoin.c ft_putstr_fd.c ft_putnbr_fd.c \
				ft_putendl_fd.c ft_putchar_fd.c ft_strmapi.c ft_split.c ft_charstr_bonus.c \
				\
				ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\

SRCS_BONUS	= ft_lstnew.c ft_lstadd_front.c

OBJ 		= $(patsubst %.c,%.o,$(SRCS))
OBJ_BONUS	= $(patsubst %.c,%.o,$(SRCS_BONUS))

D_FILES		= $(patsubst %.c,%.o,$(SRCS_BONUS) $(OBJ))
CC			= gcc

FLAGS		= -Wall -Wextra -Werror

RM 			= rm -f

all:		${NAME}

${NAME}:	${OBJ}
			ar rcs $(NAME) $?

%.o : 		%.c 	
			${CC} ${FLAGS} -c $< -o $@

bonus:	
			@make OBJ=$(OBJ_BONUS) all
clean:
			${RM} ${OBJ}

fclean:		clean
			${RM} ${NAME}
		
re:			fclean all

.PHONY: all clean fclean re