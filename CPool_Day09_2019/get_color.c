/*
** EPITECH PROJECT, 2019
** CPool_Day09_2019
** File description:
** get_color
*/

int get_color(unsigned char red, unsigned char green, unsigned char blue)
{
    unsigned int color = 0;

    color = red;
    color = color << 8;
    color = color + green;
    color = color << 8;
    color = color + blue;

    return (color);
}