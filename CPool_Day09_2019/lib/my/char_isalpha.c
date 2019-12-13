/*
** EPITECH PROJECT, 2019
** CPool_Day09_2019
** File description:
** char_isalpha
*/

int char_isalpha(char c)
{
    if (!(( c >= 48 && c <= 57)
    || ( c >= 65 && c <= 90)
    || ( c >= 97 && c <= 122))){
        return 0;
    }
    return 1;
}