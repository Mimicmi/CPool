##
## EPITECH PROJECT, 2019
## CPool_Day13_2019
## File description:
## Makefile
##

NAME = infin_add

all: $(NAME)

$(NAME): $(OBJ)
	make -C ./lib/my
	cd
	gcc -o $(NAME) infinadd.c -I./include/ -L./lib/ -lmy

.PHONY: clean fclean re

clean:
	make -C ./lib/my clean
	cd
	@rm -f $(OBJ)

fclean: clean
	make -C ./lib/my fclean
	cd
	@rm -f $(NAME)

re: fclean all