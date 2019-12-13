/*
** EPITECH PROJECT, 2019
** CPool_rush2_2019
** File description:
** checkchar
*/

#include "include/my.h"

int my_char_is_alpha(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return (1);
    } else {
        return (0);
    }
}

int my_char_is_upper(char c)
{
    if (c >= 'A' && c <= 'Z') {
        return (1);
    } else {
        return (0);
    }
}

int my_char_is_lower(char c)
{
    if (c >= 'a' && c <= 'z') {
        return (1);
    } else {
        return (0);
    }
}

int my_char_is_same(char c1, char c2)
{
    if (my_char_is_alpha(c1) && my_char_is_alpha(c1)) {
        if (my_char_is_upper(c1) && my_char_is_upper(c2) ||
        my_char_is_lower(c1) && my_char_is_lower(c2)) {
            return (c1 == c2);
        } else if (my_char_is_upper(c1)) {
            return (c1 + 32 == c2);
        } else {
            return (c1 == c2 + 32);
        }
    }
}