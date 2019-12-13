/*
** EPITECH PROJECT, 2019
** CPool_Day05_2019
** File description:
** my_compute_power_it
*/

int my_compute_power_it(int nb, int p)
{
    int result = 1;
    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    if (p == 1)
        return (nb);
    while (p >= 1)
    {
        result = result * nb;
        p--;
    }
    return (result);
}