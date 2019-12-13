/*
** EPITECH PROJECT, 2019
** CPool_Day05_2019
** File description:
** my_find_prime_sup
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int prime = nb;
    if (my_is_prime(nb) == 1)
        return (nb);
    while (prime != 0){
        if (my_is_prime(prime))
            return (prime);
        prime++;
    }
    return (2);
}