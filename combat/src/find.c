/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** find_two.c
*/

#include "../../antoine.h"

int find_stat(char *buffer, char e, char f)
{
    char *nbuffer = malloc(sizeof(char) * 10);
    int i = 0;
    int a = 0;
    while (1) {
        if (buffer[i] == e && buffer[i + 1] == f) {
            break;
        }
        i = i + 1;
    }
    i = i + 2;
    while (buffer[i] != '\n') {
        nbuffer[a] = buffer[i];
        i = i + 1;
        a = a + 1;
    }
    a = my_getnbr(nbuffer);
    return (a);
}

char *find (char *buffer, int line)
{
    char *nbuffer = malloc(sizeof(char) * 10);
    int actual = 0;
    int i = 0;
    int a = 0;
    while (actual < line) {
        if (buffer[i] == '\n') {
            actual = actual + 1;
            i = i + 1;
        }
        else
            i = i + 1;
    }
    while (buffer[i] != '\n') {
        nbuffer[a] = buffer[i];
        i = i + 1;
        a = a + 1;
    }
    return (nbuffer);
}