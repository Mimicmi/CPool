/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_strstr
*/

#include <criterion/criterion.h>

char *my_strstr(char *str, char const *to_find);

Test(my_strstr, first_occurence)
{
    char s1[] = "abcdhelloabcd";
    char to_find[] = "hello";

    cr_assert_str_eq(my_strstr(s1, to_find), &s1[4]);
}