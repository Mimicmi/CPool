/*
** EPITECH PROJECT, 2019
** main
** File description:
** No file there, just an epitech header example
*/

double check_portugues(char c, double percent);

double check_italian(char c, double percent);

double check_turkish(char c, double percent);

double check_swedish(char c, double percent);

double check_polish(char c, double percent);

double check_dutch(char c, double percent);

double check_danish(char c, double percent);

double check_icelandic(char c, double percent);

double check_finnish(char c, double percent);

double check_czesh(char c, double percent);

void check_differences(double *differences, char c, double percent)
{
    differences[0] += check_english(c, percent);
    differences[1] += check_french(c, percent);
    differences[2] += check_german(c, percent);
    differences[3] += check_spanish(c, percent);
    differences[4] += check_portugues(c, percent);
    differences[5] += check_italian(c, percent);
    differences[6] += check_turkish(c, percent);
    differences[7] += check_swedish(c, percent);
    differences[8] += check_polish(c, percent);
    differences[9] += check_dutch(c, percent);
    differences[10] += check_danish(c, percent);
    differences[11] += check_icelandic(c, percent);
    differences[12] += check_finnish(c, percent);
    differences[13] += check_czesh(c, percent);
}

void display_language(char *language)
{
    write(1, "=> ", 3);
    my_putstr(language);
}

int main(int argc, char **argv)
{
    int length;
    double percent;
    double differences[] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 0};
    char *languages[] = {"English", "French", "German", "Spanish", "Portugues",
                        "Italian", "Turkish", "Swedish", "Polish", "Dutch",
                        "Danish", "Icelandic", "Finnish", "Czesh", 0};
    for (int i = 2; argv[i]; i++) {
        if (my_strlen(argv[i]) == 1 && my_char_is_alpha(argv[i][0])) {
            length = count_occurence(argv[1], argv[i][0]);
            percent = (((double)length / (double)my_count_alpha(argv[1]))*100);
            print_letters(argv[i][0], length, percent);
            check_differences(&differences, argv[i][0], percent);
        } else {
            write(2, "Media write error\n", 18);
            return (84);
        }
    }
    display_language(languages[compare_language(differences)]);
    return (0);
}