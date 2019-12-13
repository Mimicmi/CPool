/*
** EPITECH PROJECT, 2019
** CPool_rush2_2019
** File description:
** occurences_letter
*/

#include "include/my.h"

int my_char_is_alpha(char c);

void print_letters(char c, int length, double percent);

int count_occurence(char *str, char c);

int my_char_is_same(char c1, char c2);

int my_char_is_alpha(char c);

int my_char_is_upper(char c);

int my_char_is_lower(char c);

double check_english(char c, double percent);

double check_spanish(char c, double percent);

double check_german(char c, double percent);

double check_french(char c, double percent);

int compare_language(double *differences);

void print_letters(char c, int length, double percent)
{
    int rest = percent * 100 - ((int)percent * 100);
    my_putchar(c);
    my_putchar(':');
    my_put_nbr(length);
    my_putchar(' ');
    my_putchar('(');
    my_put_nbr((int)percent);
    my_putchar('.');
    my_put_nbr(rest);
    if (rest == 0)
        my_putchar('0');
    my_putchar('%');
    my_putchar(')');
    my_putchar('\n');
}

int count_occurence(char *str, char c)
{
    int length = 0;

    for (int i = 0; str[i]; i++) {
        if (my_char_is_alpha(str[i]) && my_char_is_same(str[i], c)) {
            length++;
        }
    }
    return (length);
}

int my_count_alpha(char *str)
{
    int length = 0;

    for (int i = 0; str[i]; i++) {
        if (my_char_is_alpha(str[i])) {
            length++;
        }
    }
    return (length);
}

int main(int argc, char **argv)
{
    int length;
    double percent;
    double differences[] = {0.0, 0.0, 0.0, 0.0, 0};
    char *languages[] = {"English", "French", "German", "Spanish", 0};
    for (int i = 2; argv[i]; i++) {
        if (my_strlen(argv[i]) == 1 && my_char_is_alpha(argv[i][0])) {
            length = count_occurence(argv[1], argv[i][0]);
            percent = (((double)length / (double)my_count_alpha(argv[1]))*100);
            print_letters(argv[i][0], length, percent);
            differences[0] += check_english(argv[i][0], percent);
            differences[1] += check_french(argv[i][0], percent);
            differences[2] += check_german(argv[i][0], percent);
            differences[3] += check_spanish(argv[i][0], percent);
        } else {
            write(2, "Media write error\n", 18);
            return (84);
        }
    }
    write(1, "=> ", 3);
    my_putstr(languages[compare_language(differences)]);
    return (0);
}
