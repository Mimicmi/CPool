/*
** EPITECH PROJECT, 2019
** CPool_infinadd_2019
** File description:
** infinadd
*/

#include <unistd.h>
#include <stdlib.h>
#include "./include/my.h"

char *add(char *s1, char *s2)
{
    int i = 0, rest = 0, len = 0, lena = my_strlen(s1), lenb = my_strlen(s2);
    char *poi = (char *)malloc(len + 1);
    if (lena >= lenb)
        len = lena + 1;
    else if (lenb > lena)
        len = lenb + 1;
    poi[0] = '0';
    poi[len] = 0;
    while (i < lena || i < lenb || rest){
        if (i >= lena && i >= lenb){
            poi[len - i - 1] = rest % 10 + '0';
            rest = rest / 10;
        }
        else if (i >= lena){ 
           poi[len - i - 1] = (rest + s2[lenb - i - 1] - '0') % 10 + '0';
            rest = (rest + s2[lenb - i - 1] - '0') / 10;
        }
        else if (i >= lenb){
            poi[len - i - 1] = (rest + s1[lena - i - 1] - '0') % 10 + '0';
            rest = (rest + s1[lena - i - 1] - '0') / 10;
        }
        else{
            poi[len - i - 1] = (rest + s1[lena - i - 1] - '0' + s2[lenb - i - 1] - '0') % 10 + '0';
            rest = (rest + s1[lena - i - 1] - '0' + s2[lenb - i - 1] - '0')/ 10;
        }
        i++;
    }
    return (poi + len - i);
}

int compare(char *s1, char *s2)
{
    int i = 0, lena = my_strlen(s1), lenb = my_strlen(s2);
    if (lena > lenb)
        return (1);
    else if (lenb > lena)
        return (-1);
    while (i < lena){
        if (s1[i] > s2[i])
            return (1);
        if (s2[i] > s1[i])
            return (-1);
        i++;
    }
    return (0);
}

char *substract(char *s1, char *s2)
{
    int i = 0, rest = 0, len = 0, lena = my_strlen(s1), lenb = my_strlen(s2);
    char *poi = (char *)malloc(len + 1);
    if (lena >= lenb)
        len = lena;
    else if (lenb > lena)
        len = lenb;
    poi[len] = 0;
    while (i < lena || i < lenb){
        if (i >= lena){
            poi[len - i - 1] = ((s2[lenb - i - 1] - '0') - rest + 10) % 10 +'0';
            rest = (s2[lenb - i - 1] - '0' - rest) < 0;
        }
        else if (i >= lenb){
            poi[len - i - 1] = ((s1[lena - i - 1] - '0') - rest + 10) % 10 +'0';
            rest = (s1[lena - i - 1] - '0' - rest) < 0;
        }
        else{
            poi[len - i - 1] = ((s1[lena - i - 1] - '0') - (s2[lenb - i - 1] - '0') - rest + 10) % 10 + '0';
            rest = ((s1[lena - i - 1] - '0') - (s2[lenb - i - 1] - '0') - rest) < 0;
        }
        i++;
    }
    poi = poi + len - i;
    while (poi[0] == '0')
        poi++;
    return (poi);
}

int main(int argc, char **argv)
{
    char *res;
    int comp;

    if (argc != 3)
        return (0);
    if (argv[1][0] != '-' && argv[2][0] != '-')
        res = add(argv[1], argv[2]);
    else if (argv[1][0] == '-' && argv[2][0] == '-'){
        write(1, "-", 1);
        res = add(argv[1] + 1, argv[2] + 1);
    }
    else{
        if (argv[1][0] == '-'){
            comp = compare(argv[1] + 1, argv[2]);
            if (comp > 0){
                write(1, "-", 1);
                res = substract(argv[1] + 1, argv[2]);
            }
            else if (comp < 0)
                res = substract(argv[2], argv[1] + 1);
            else
                res = "0";
        }
        else{
            comp = compare(argv[1], argv[2] + 1);
            if (comp > 0)
                res = substract(argv[1], argv[2] + 1);
            else if (comp < 0){
                write(1, "-", 1);
                res = substract(argv[2] + 1, argv[1]);
            }
            else
                res = "0";
        }
    }
    write(1, res, my_strlen(res));
    write(1, "\n", 1);
    return (0);
}