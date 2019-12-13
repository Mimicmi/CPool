/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_revstr
*/

#include <criterion/criterion.h>

int my_strlen(char const *str);

char *my_revstr(char *str);

Test(my_revstr, copy_five_characters_in_empty_array)
{
    char dest[12] = "Hello World";

    my_revstr(dest);
    cr_assert_str_eq(dest, "dlroW olleH");
}