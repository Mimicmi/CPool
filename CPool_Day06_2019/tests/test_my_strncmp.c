/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_strncmp
*/

#include <criterion/criterion.h>

int my_strncmp(char const *s1, char const *s2, int n);

Test(my_strncmp, compare_strings)
{
    char str1[5] = "hello";
    char str2[5] = "hallo";
    char str3[5] = "hello";

    my_strncmp(str1, str2, 2);
    cr_assert_eq(my_strncmp(str1, str2, 2), 1);
    cr_assert_eq(my_strncmp (str1, str3, 2), 0);
}