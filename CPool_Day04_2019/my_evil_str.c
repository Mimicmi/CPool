/*
** EPITECH PROJECT, 2019
** CPool_Day04_2019
** File description:
** my_evil_str
*/

int my_strlen(char const *str);

char *my_evil_str(char *str)
{
    int i = 0;
    int j = 0;
    char temp;
    i = my_strlen(str) - 1;
    while (i > j){
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        i--;
        j++;
    }
    return (str);
}