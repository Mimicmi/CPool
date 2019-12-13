##
## EPITECH PROJECT, 2019
## CPool_Day13_2019
## File description:
## Makefile
##

CC=gcc
CGFLAGS=-Wall
NAME=libbtree.a
SRC=btree_apply_infix.c \
	btree_apply_prefix.c \
	btree_apply_suffix.c \
	btree_create_node.c \
	btree_insert_data.c
OBJ=$(SRC:.c)
OBJ2=*.o

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) -c *.c
	ar rc $(NAME) $(SRC)
	ranlib $(NAME)

.PHONY: clean fclean re

clean:
	rm -rf $(OBJ2)

fclean:
	rm -f $(NAME) $(OBJ2)

re: clean fclean all