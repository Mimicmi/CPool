/*
** EPITECH PROJECT, 2019
** CPool_Day03_2019
** File description:
** my_print_digits
*/

void my_putchar(char c);

int my_print_digits(void)
{
    char c = '0';
    while (c <= '9'){
        my_putchar(c);
        c++;
    }
}