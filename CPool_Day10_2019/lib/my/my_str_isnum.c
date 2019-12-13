/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_str_isnum
*/

int my_str_isnum(char const *str)
{
    int i = 0;
    int j = 1;
    while (str[i] != '\0'){
        if (str[i] >= 48 && str[i] <= 57){
            j = 1;
        }
        else
            return (0);
        i++;
    }
    return (j);
}