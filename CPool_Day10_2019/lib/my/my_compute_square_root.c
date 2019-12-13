/*
** EPITECH PROJECT, 2019
** CPool_Day05_2019
** File description:
** my_compute_square_root
*/

int my_compute_square_root(int nb)
{
    int result = 0;
    int square = 1;
    if (nb <= 0)
        return (0);
    if (nb == 1)
        return (1);
    while (result <= nb){
        result = square * square;
            if (nb == result)
                return (square);
        square++;
    }
    return (0);
}