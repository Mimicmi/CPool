/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_strcapitalize
*/

#include <criterion/criterion.h>

char *my_strcapitalize(char *str);

Test(my_strcapitalize, upper_and_lower_case)
{
    char str[24] = "hello +tous 42les   gens";

    my_strcapitalize(str);
    cr_assert_str_eq(str, "Hello +Tous 42les   Gens");
}