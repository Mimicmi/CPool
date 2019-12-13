/*
** EPITECH PROJECT, 2019
** CPool_Day08_2019
** File description:
** concat_params
*/

#include <stdlib.h>

char *concat_params(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *dest;
    if (!(dest = malloc(sizeof(char) * (argc - 1))))
        return (NULL);
    while (i < argc){
        while (argv[i][j] != '\0'){
            dest[k] = argv[i][j];
            k++;
            j++;
        }
        dest[k] = '\n';
        k++;
        i++;
        j = 0;
    }
    dest[k - 1] = '\0';
    return (dest);
    free (dest);
}