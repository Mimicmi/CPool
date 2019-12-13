/*
** EPITECH PROJECT, 2019
** CPool_Day07_2019
** File description:
** my_strcat
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

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int size = my_strlen(dest);
    while (src[i] != '\0'){
        dest[size + i] = src[i];
        i++;
    }
    dest[size + i] = '\0';
    return (dest);
}