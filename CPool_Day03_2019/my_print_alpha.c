/*
** EPITECH PROJECT, 2019
** my_print_alpha.c
** File description:
** print alphabet putchar
*/

void my_putchar(char c);

int	my_print_alpha(void)
{
    char c = 'a';
    while (c <= 'z'){
        my_putchar(c);
        c++;
    }
}
