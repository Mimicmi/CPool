/*
** EPITECH PROJECT, 2019
** CPool_Day03_2019
** File description:
** my_print_comb2
*/

void my_putchar(char c);

int my_print_comb2(void)
{
    int i = 0;
    int j;
    while (i <= 99){
        j = i + 1;
        while (j <= 99){
            my_putchar(i / 10 + 48);
            my_putchar(i % 10 + 48);
            my_putchar(' ');
            my_putchar(j / 10 + 48);
            my_putchar(j % 10 + 48);
            if (i / 10 != 9 || i % 10 != 8){
                my_putchar(44);
                my_putchar(' ');
            }
            j++;
        }
        i++;
    }
}