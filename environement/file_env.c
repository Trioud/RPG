/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** file_env
*/

#include "../my.h"

char *read_file(char *filepath, env_t *env)
{
    int fd = open(filepath, O_RDONLY);
    char *buffer =  malloc(sizeof(char) * 20);
    int file = read(fd, buffer, 20);
    close(fd);
    return (buffer);
}