/*
** EPITECH PROJECT, 2019
** CPool_Day11_2019
** File description:
** my_list_size
*/

#include "./include/mylist.h"
#include <stdlib.h>

int my_list_size(linked_list_t const *begin)
{
    linked_list_t *jose;
    int i = 0;
    jose = begin;
    while (jose){
        jose = jose-> next;
        i++;
    }
    return (i);
}