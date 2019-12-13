##
## EPITECH PROJECT, 2019
## CPool_Day12_2019
## File description:
## Makefile
##

CC=gcc
CGFLAGS=-Wall
NAME=cat
SRCS=recode.c
OBJ=$(SRC:.c)

all :
	@make -C ../lib/my
	cd
	$(CC) -c *.c

.PHONY: clean fclean re

clean:
	rm -rf *.o

fclean: clean
	rm -f ../lib/my/*.o
	rm -f ../lib/libmy.a
	rm -f ../lib/my/libmy.a
	rm -rf ../include

re: clean fclean all