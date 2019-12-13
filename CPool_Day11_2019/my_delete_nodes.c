/*
** EPITECH PROJECT, 2019
** CPool_Day11_2019
** File description:
** my_delete_nodes
*/

#include "./include/mylist.h"

int my_delete_nodes(linked_list_t **begin, void const *data_ref, int (*cmp)())
{
    linked_list_t *jose;
    jose = *begin;
    while (jose){
        if ((*cmp)(jose->next, data_ref) == 0){
            *begin = jose->next;
        }
        jose = jose->next;
    }
    return (0);
}