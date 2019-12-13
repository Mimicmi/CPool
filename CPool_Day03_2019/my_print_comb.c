/*
** EPITECH PROJECT, 2019
** CPool_Day03_2019
** File description:
** my_print_comb
*/

void my_putchar(char c);

int my_print_comb(void)
{
    char a = '0';
    while (a <= '7'){
        char b = a+1;
        while (b <= '8'){
            char c = b+1;
            while (c <= '9'){
                my_putchar(a);
                my_putchar(b);
                my_putchar(c);
                if (a != '7' || b != '8' || c != '9'){
                    my_putchar(44);
                    my_putchar(' ');
                }
                c++;
            }
            b++;
        }
        a++;
    }
}