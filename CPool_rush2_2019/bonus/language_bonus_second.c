/*
** EPITECH PROJECT, 2019
** language_bonus_second
** File description:
** No file there, just an epitech header example
*/

double check_dutch(char c, double percent);

double check_danish(char c, double percent);

double check_icelandic(char c, double percent);

double check_finnish(char c, double percent);

double check_czesh(char c, double percent);

double check_dutch(char c, double percent)
{
    double higher;
    double lower;
    double array[] = {
            7.48, 1.58, 1.24, 5.93, 18.91, 0.80, 3.40, 2.38, 6.49, 1.46, 2.24,
            3.56, 2.21, 10.03, 6.06, 1.57, 0.00, 6.41, 3.73, 6.79, 1.99, 2.85,
            1.52, 0.03, 0.03, 1.39
    };
    if (my_char_is_lower(c)) {
        c -= 32;
    }
    higher = (percent < array[c - 65]) ? array[c - 65] : percent;
    lower = (percent > array[c - 65]) ? array[c - 65] : percent;
    return (higher - lower);
}

double check_danish(char c, double percent)
{
    double higher;
    double lower;
    double array[] = {
            6.02, 2.00, 0.56, 5.85, 15.45, 2.40, 4.07, 1.62, 6.00, 0.73, 3.39,
            5.22, 3.23, 7.24, 4.63, 1.75, 0.00, 8.95, 5.80, 6.86, 1.97, 2.33,
            0.06, 0.02, 0.69, 0.03
    };
    if (my_char_is_lower(c)) {
        c -= 32;
    }
    higher = (percent < array[c - 65]) ? array[c - 65] : percent;
    lower = (percent > array[c - 65]) ? array[c - 65] : percent;
    return (higher - lower);
}

double check_icelandic(char c, double percent)
{
    double higher;
    double lower;
    double array[] = {
            10.11, 1.04, 0.00, 1.57, 6.41, 3.01, 4.24, 1.87, 7.57, 1.14, 3.31,
            4.53, 4.04, 7.71, 2.16, 0.78, 0.00, 8.58, 5.63, 4.95, 4.56, 2.43,
            0.00, 0.04, 0.90, 0.00
    };
    if (my_char_is_lower(c)) {
        c -= 32;
    }
    higher = (percent < array[c - 65]) ? array[c - 65] : percent;
    lower = (percent > array[c - 65]) ? array[c - 65] : percent;
    return (higher - lower);
}

double check_finnish(char c, double percent)
{
    double higher;
    double lower;
    double array[] = {
            12.21, 0.28, 0.28, 1.04, 7.96, 0.19, 0.39, 1.85, 10.81, 2.04, 4.97,
            5.76, 3.20, 8.82, 5.61, 1.84, 0.01, 2.87, 7.86, 8.75, 5.00, 2.25,
            0.09, 0.03, 1.74, 0.05
    };
    if (my_char_is_lower(c)) {
        c -= 32;
    }
    higher = (percent < array[c - 65]) ? array[c - 65] : percent;
    lower = (percent > array[c - 65]) ? array[c - 65] : percent;
    return (higher - lower);
}

double check_czesh(char c, double percent)
{
    double higher;
    double lower;
    double array[] = {
            8.42, 0.82, 0.74, 3.47, 7.56, 0.08, 0.09, 1.35, 6.07, 1.43, 2.89,
            3.80, 2.44, 6.46, 6.69, 1.90, 0.00, 4.79, 5.21, 5.72, 2.16, 5.34,
            0.01, 0.02, 1.04, 1.50
    };
    if (my_char_is_lower(c)) {
        c -= 32;
    }
    higher = (percent < array[c - 65]) ? array[c - 65] : percent;
    lower = (percent > array[c - 65]) ? array[c - 65] : percent;
    return (higher - lower);
}
