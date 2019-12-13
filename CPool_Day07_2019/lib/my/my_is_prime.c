/*
** EPITECH PROJECT, 2019
** CPool_Day05_2019
** File description:
** my_is_prime
*/

int my_is_prime(int nb)
{
    int prime = 2;
    if (nb < 0 || nb == 0 || nb == 1)
        return (0);
    if (nb == 2)
        return (1);
    while (prime < nb){
        if (nb % prime == 0)
            return (0);
        prime++;
    }
    return (1);
}