/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_revstr
*/

int my_strlen(char const *str)
{
    int size;
    size = 0;
    while (str[size] != '\0'){
        size++;
    }
    return (size);
}

char *my_revstr(char *str)
{
    int i;
    int j;
    int swap;
    i = my_strlen(str) - 1;
    j = 0;
    while (i > j){
        swap = str[i];
        str[i] = str[j];
        str[j] = swap;
        i--;
        j++;
    }
    return (str);
}