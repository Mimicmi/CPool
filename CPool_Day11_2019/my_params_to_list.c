/*
** EPITECH PROJECT, 2019
** CPool_Day11_2019
** File description:
** my_params_to_list
*/

#include "./include/mylist.h"
#include <stdlib.h>

linked_list_t *add_params(void *data, linked_list_t *list)
{
    linked_list_t *add_list;

    add_list = malloc(sizeof(linked_list_t));
    add_list-> data = data;
    add_list-> next = list;
    return (add_list);
}

linked_list_t *my_params_to_list(int ac, char * const * av)
{
    linked_list_t *list;
    int i = 0;
    list = NULL;

    while (i < ac){
        list = add_params(av[i], list);
        i++;
    }
    return (list);
}