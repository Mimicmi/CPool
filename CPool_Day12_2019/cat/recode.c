/*
** EPITECH PROJECT, 2019
** CPool_Day12_2019
** File description:
** recode
*/

#include <fcntl.h>
#include <errno.h>
#include "../include/my.h"
#include <unistd.h>

int boucleinfinilul(void)
{
    int ret;
    char buffer[30000];
    while (1){
        ret = read(0, buffer, 30000);
        buffer[ret] = '\0';
        if (ret == 0)
            return (0);
        my_putstr(buffer);
    }
}

void check_error(char **argv, int i, int error)
{
    if (error == ENOENT){
        write(2, "cat: ", 5);
        write(2, argv[i], my_strlen(argv[i]));
        write(2, ": No such file or directory\n", 28);
        return (-1);
    }
    if (error = EACCES){
        write(2, "cat: ", 5);
        write(2, argv[i], my_strlen(argv[i]));
        write(2, ": Permission denied\n", 20);
        return (-1);
    }
    if (error = EISDIR){
        write(2, "cat: ", 5);
        write(2, argv[i], my_strlen(argv[i]));
        write(2, ": Is a directory\n", 17);
    }
    if (argv[i][0] == '-')
        boucleinfinilul();
}

int main(int argc, char **argv)
{
    int i = 1;
    int fd, list, err;
    char buffer[30000];
    if (argc == 1)
        boucleinfinilul();
    while (i < argc){
        list = open(argv[i], O_RDONLY);
        if (fd == -1)
            err = 1;
        if (err == 1)
            check_error(argv, i, errno);
        else
            my_putstr(buffer);
        close(fd);
        i++;
    }
}