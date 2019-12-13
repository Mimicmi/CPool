/*
** EPITECH PROJECT, 2019
** CPool_Day07_2019
** File description:
** my_rev_params
*/

void my_putchar(char c);

int my_putstr(char const *str);

int main(int argc, char *argv[])
{
    int i = 0;

    while (i < argc--){
        my_putstr(argv[argc]);
        my_putchar('\n');
    }
    return (0);
}