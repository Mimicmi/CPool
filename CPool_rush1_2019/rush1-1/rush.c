/*
** EPITECH PROJECT, 2019
** rush1-1
** File description:
** rush
*/

#include <unistd.h>

void top_line(int x)
{
    int ax = 0;
    if (x > 0){
        write(1, "o", 1);
        ax++;
    }
    if (x > 1){
        while (x > ax +1){
            write(1, "-", 1);
            ax++;
        }
        write(1, "o", 1);
    }
    write(1, "\n", 1);
}

void midle_line(int x)
{
    int ax = 0;
    if (x > 0){
        write(1, "|", 1);
        ax++;
    }
    if (x > 1){
        while (x > ax + 1){
            write(1, " ", 1);
            ax++;
        }
        write (1, "|", 1);
    }
    write(1, "\n", 1);
}

void check_errors(int x, int y)
{
    if (x <= 0 || y <= 0){
        write(2, "Invalid size\n", 13);
        return ;
    }
}

void rush(int x, int y)
{
    int by = 3;
    if (x <= 0 || y <= 0)
        return (check_errors(x, y));
    if (x > 0 && y > 0){
        top_line(x);
    }
    while (by <= y){
        midle_line(x);
        by++;
    }
    if (y > 1){
        top_line(x);
    }
}