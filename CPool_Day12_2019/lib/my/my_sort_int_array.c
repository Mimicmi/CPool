/*
** EPITECH PROJECT, 2019
** my_sort_int_array
** File description:
** No file there , just an epitech header example
*/

void my_sort_int_array(int *array, int size);

void check_order(int *array, int i, int j);

void my_sort_int_array(int *array, int size)
{

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            check_order(array, i, j);
        }
    }
}

void check_order(int *array, int i, int j)
{
    int tmp;

    if (array[j] > array[i]) {
        tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
    }
}