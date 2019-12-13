/*
** EPITECH PROJECT, 2019
** CPool_Day08_2019
** File description:
** my_show_word_array
*/

#include <stdlib.h>

void my_putchar(char c);

void my_putstr(char *str);

int my_show_word_array(char * const *tab)
{
    int i = 0;
    while (tab[i] != NULL){
        my_putstr(tab[i]);
        my_putchar('\n');
        i++;
    }
}