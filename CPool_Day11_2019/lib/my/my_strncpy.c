/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_strncpy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    while (i < n && src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    while (n > i){
        dest[i] = '\0';
        i++;
    }
    return (dest);
}