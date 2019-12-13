/*
** EPITECH PROJECT, 2019
** CPool_Day03_2019
** File description:
** my_put_nbr
*/

#include <unistd.h>

void my_putchar(char c);

int my_put_nbr(int nb)
{
    if (nb < 0){
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb == -2147483648)
        write(1, "2147483648", 10);
    if (nb < 10 && nb >= 0){
        my_putchar(nb + 48);
    }

    if (nb >= 10){
        my_put_nbr(nb / 10);
        my_putchar((nb % 10) + 48);
    }
}
