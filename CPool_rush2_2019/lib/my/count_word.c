/*
** EPITECH PROJECT, 2019
** CPool_Day09_2019
** File description:
** count_word
*/

int count_word(char const *str)
{
    int count_word = 0;
    for (int i = 0; str[i]; i++){
        if ( !char_isalpha(str[i]) && char_isalpha(str[i - 1])){
            count_word++;
        }
    }
    if (char_isalpha(str[my_strlen(str)-1])){
        return (count_word + 1);
    }
    return (count_word);
}
