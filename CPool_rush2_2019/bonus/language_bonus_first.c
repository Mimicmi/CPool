/*
** EPITECH PROJECT, 2019
** language_bonus
** File description:
** No file there, just an epitech header example
*/

double check_portugues(char c, double percent);

double check_italian(char c, double percent);

double check_turkish(char c, double percent);

double check_swedish(char c, double percent);

double check_polish(char c, double percent);

double check_portugues(char c, double percent)
{
    double higher;
    double lower;
    double array[] = {
            14.63, 1.04, 3.88, 4.99, 12.57, 1.02, 1.30, 0.78, 6.18, 0.39,
            0.01, 2.77, 4.73, 4.44, 9.73, 2.52, 1.20, 6.53, 6.80, 4.33,
            3.63, 1.57, 0.03, 0.25, 0.00, 0.47
    };
    if (my_char_is_lower(c)) {
        c -= 32;
    }
    higher = (percent < array[c - 65]) ? array[c - 65] : percent;
    lower = (percent > array[c - 65]) ? array[c - 65] : percent;
    return (higher - lower);
}

double check_italian(char c, double percent)
{
    double higher;
    double lower;
    double array[] = {
            11.74, 0.92, 4.50, 3.73, 11.79, 1.15, 1.64, 0.63, 10.14, 0.01, 0.00,
            6.51, 2.51, 6.88, 9.83, 3.05, 0.50, 6.36, 4.98, 5.62, 3.01, 2.09,
            0.03, 0.00, 0.02, 1.18
    };
    if (my_char_is_lower(c)) {
        c -= 32;
    }
    higher = (percent < array[c - 65]) ? array[c - 65] : percent;
    lower = (percent > array[c - 65]) ? array[c - 65] : percent;
    return (higher - lower);
}

double check_turkish(char c, double percent)
{
    double higher;
    double lower;
    double array[] = {
            11.92, 2.84, 0.96, 4.70, 8.91, 0.46, 1.25, 1.21, 8.60, 0.03, 4.68,
            5.92, 3.75, 7.48, 2.47, 0.88, 0.00, 6.72, 3.01, 3.31, 3.23, 0.95,
            0.00, 0.00, 3.33, 1.50
    };
    if (my_char_is_lower(c)) {
        c -= 32;
    }
    higher = (percent < array[c - 65]) ? array[c - 65] : percent;
    lower = (percent > array[c - 65]) ? array[c - 65] : percent;
    return (higher - lower);
}

double check_swedish(char c, double percent)
{
    double higher;
    double lower;
    double array[] = {
            9.38, 1.53, 1.48, 4.70, 10.14, 2.02, 2.86, 2.09, 5.81, 0.61, 3.14,
            5.27, 3.47, 8.54, 4.48, 1.83, 0.02, 8.43, 6.59, 7.69, 1.91, 2.41,
            0.14, 0.15, 0.70, 0.07
    };
    if (my_char_is_lower(c)) {
        c -= 32;
    }
    higher = (percent < array[c - 65]) ? array[c - 65] : percent;
    lower = (percent > array[c - 65]) ? array[c - 65] : percent;
    return (higher - lower);
}

double check_polish(char c, double percent)
{
    double higher;
    double lower;
    double array[] = {
            10.50, 1.74, 3.89, 3.72, 7.35, 0.14, 1.73, 1.01, 8.32, 1.83, 2.75,
            2.56, 2.51, 6.23, 6.66, 2.44, 0.00, 5.24, 5.22, 2.47, 2.06, 0.01,
            5.81, 0.00, 3.20, 4.85
    };
    if (my_char_is_lower(c)) {
        c -= 32;
    }
    higher = (percent < array[c - 65]) ? array[c - 65] : percent;
    lower = (percent > array[c - 65]) ? array[c - 65] : percent;
    return (higher - lower);
}