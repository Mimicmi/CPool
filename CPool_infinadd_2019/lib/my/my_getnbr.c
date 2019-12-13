/*
** EPITECH PROJECT, 2019
** CPool_Day04_2019
** File description:
** my_getnbr
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int negative = 0;
    long result = 0;
    while (str[i] == '-' || str[i] == '+'){
        if (str[i] == '-')
            negative++;
        i++;
    }
    while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57 ){
        result = result * 10;
        result = result + (str[i] - 48);
        i++;
    }
    if (result > 2147483648 || result < -2147483648 || i > 11)
        return (0);
    if (negative % 2 != 0){
        result = result * -1;
    }
    return (result);
}