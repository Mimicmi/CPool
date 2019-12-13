/*
** EPITECH PROJECT, 2019
** CPool_Day05_2019
** File description:
** my_compute_factorial_it
*/

int my_compute_factorial_it(int nb)
{
    int result = 1;
    if (nb < 0)
        return (0);
    if (nb == 0 || nb == 1)
        return (1);
    if (nb >= 13)
        return (0);
    while (nb > 1){
        result = result * nb;
        nb--;
    }
    return (result);
}