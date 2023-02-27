NAME = push_swap

SRCS =	main.c \
		baby.c \
		ft_split.c \
		mouvement.c \
		other.c \
		empile.c \
		middle.c \
		choose_algo.c \
		adult.c
	

OBJS =	${SRCS:.c=.o}

GCC = gcc -Wall -Wextra -Werror

$(NAME): $(OBJS)
	$(GCC) $(OBJS) -o $(NAME) 

all: $(NAME)

clean:
	rm -rf ${OBJS}

fclean:	clean
	rm -rf $(NAME)

re:	fclean all