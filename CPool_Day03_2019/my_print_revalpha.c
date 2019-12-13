/*
** EPITECH PROJECT, 2019
** CPool_Day03_2019
** File description:
** my_print_revalpha
*/

void my_putchar(char c);

int my_print_revalpha(void)
{
    char c = 'z';
    while (c >= 'a'){
        my_putchar(c);
        c--;
    }
}
