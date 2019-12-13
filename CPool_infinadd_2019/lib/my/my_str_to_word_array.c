/*
** EPITECH PROJECT, 2019
** CPool_Day09_2019
** File description:
** my_str_to_word_array
*/

int count_word(char const *str);

char **my_str_to_word_array(char const *str)
{
    char **array;
    int index = 0;
    int j = 0;
    array = malloc((sizeof(char *) * count_word(str))+ 1);
    array[index] = malloc(sizeof(char) * 100);
    for (int i = 0; str[i]; i++){
        if (char_isalpha(str[i])){
            array[index][j] = str[i];
            j++;
        }
        if (!char_isalpha(str[i]) && char_isalpha(str[i - 1])){
            index++;
            j = 0;
            array[index] = malloc(sizeof(char) * 100);
        }
        array[index][j] = '\0';
    }
    return (array);
}