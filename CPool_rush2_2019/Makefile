##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

RM = rm -f

NAME = rush2

SRC = occurences_letter.c \
	checkchar.c           \
	language.c

OBJ = $(SRC:.c=.o)
CFLAGS+=-g -Wall

all: $(NAME)

$(NAME): $(OBJ)
	cc -c ./lib/my/*.c
	ar rc ./lib/my/libmy.a *.o
	ranlib ./lib/my/libmy.a
	cc $(OBJ) -o $(NAME) -lmy -L ./lib/my

clean:
	$(RM) $(OBJ)
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:	all clean fclean re