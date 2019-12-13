/*
** EPITECH PROJECT, 2019
** rush
** File description:
** display rush 1-4
*/
#include <unistd.h>

void my_putchar(char c);

void print(int type, int n_char)
{
    for (int i = 0; i < n_char; i++)
    {
        switch (type)
        {
            case 0:
                my_putchar('C');
                break;
            case 1:
                my_putchar('B');
                break;
            case 2:
                my_putchar(' ');
                break;
            default:
                my_putchar('A');
                break;
        }
    }
}

void triple_print(int n_col, int cas)
{
    switch (cas)
    {
        case 0:
            print(3, 1);
            print(1, n_col - 2);
            print(3, 1);
            break;
        case 1:
            print(0, 1);
            print(1, n_col - 2);
            print(0, 1);
            break;
        default:
            print(1, 1);
            print(2, n_col - 2);
            print(1, 1);
            break;
    }
}

void line(int n_col, int line_type)
{
    switch (line_type)
    {
        case 0:
            triple_print(n_col, 0);
            my_putchar('\n');
            break;
        case 1:
            triple_print(n_col, 1);
            my_putchar('\n');
            break;
        case 2:
            triple_print(n_col, 2);
            my_putchar('\n');
            break;
        default:
            print(1, n_col);
            my_putchar('\n');
            break;
    }
    return ;
}

int error(int x, int y)
{
    if (x <= 0 || y <= 0) {
        return (write(2, "Invalid size\n", 13));
    }
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0) {
        error(x, y);
        return ;
    }
    for (int j = 0; j < y; j++)
    {
        if (x != 1 && y != 1) {
            if (j == 0) {
                line(x, 0);
            } else if (j == y - 1) {
                line(x, 1);
            } else {
                line(x, 2);
            }
        } else {
            line(x, 3);
        }
    }
    return ;
}