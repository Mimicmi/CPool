/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    while (i < n && s1[i] == s2[i] && s1[ i] != '\0' && s2[i] != '\0')
        i++;
    if (s1[i] < s2[i] && n != 0)
        return (-1);
    if (s1[i] > s2[i] && n != 0)
        return (1);
    return (0);
}