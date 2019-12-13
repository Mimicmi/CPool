/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_strcapitalize
*/

char *my_strcapitalize(char *str)
{
    int i = 0;
    if (str[i] != '\0' && str[i] >= 97 && str[i] <= 122)
        str[i] = str[i] - 32;
    i = 1;
    while (str[i] != '\0'){
        if (((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
        && (str[i - 1] < '0' || (str[i - 1] > '9' && str[i - 1] < 65)
        || (str[i - 1] > 90 && str[i - 1] < 97) || str[i - 1] > 122)){
            if (str[i] >= 97 && str[i] <= 122)
                str[i] = str[i] - 32;
        }
        else if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
    i++;
    }
    return (str);
}