/*
** EPITECH PROJECT, 2019
** CPool_match-nmatch_2019
** File description:
** match
*/

#include <stdio.h>

int match(char const *s1, char const *s2)
{
    int i = 0;
    int j = 0;
    while (s1[i] != '\0'){
        while (s1[i] == s2[j] || s2[0] == '*'){
            if (s1[i] == '\0' && s2[j] == '\0')
                return (1);
            i++;
            j++;
        }
        if (s2[j] == '*' && s2[j + 1] == '\0')
            return (1);
        if (s2[j] == '*'){
            while (s2[j + 1] != s1[i])
                i++;
        }
        else
            return (0);
        j++;
    }
    return (1);
}