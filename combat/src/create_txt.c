/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** create_txt.c
*/

#include "../../antoine.h"

char *where_is_txt(void)
{
    int fd = 0;
    int lire = 0;
    char const *filepath = "fiche.txt";
    struct stat doki;
    stat (filepath, &doki);
    int size = doki.st_size;
    char *buffer = malloc(sizeof(char)* size+1);
    fd = open(filepath, O_RDONLY);
    lire = read(fd, buffer, size);
    buffer[size] = '\0';
    return (buffer);
}