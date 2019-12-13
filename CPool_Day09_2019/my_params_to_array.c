/*
** EPITECH PROJECT, 2019
** CPool_Day09_2019
** File description:
** my_params_to_array
*/

#include "include/my.h"
#include <stdlib.h>

struct info_param *my_params_to_array(int ac, char **av)
{
    int i = 0;
    struct info_param *res;
    res = malloc((ac * sizeof(struct info_param)) + 1);
    while (i < ac){
        res[i].length = my_strlen(av[i]);
        res[i].str = av[i];
        res[i].copy = my_strdup(av[i]);
        res[i].word_array = my_str_to_word_array(av[i]);
        i++;
    }
    res[i].str = 0;
    return (res);
}