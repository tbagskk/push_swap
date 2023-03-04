NAME = push_swap

SRCS =	main.c \
		baby.c \
		ft_split.c \
		mouvement.c \
		other.c \
		empile.c \
		middle.c \
		choose_algo.c \
		adult.c \
		parsing.c \
		adult_cout.c \
		other2.c \
		decale_a_b.c \
		adult_cout2.c \
		mouvement2.c \
		verif_tri.c \
		other3.c \
		parsing2.c
	

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