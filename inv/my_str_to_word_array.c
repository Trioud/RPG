/*
** EPITECH PROJECT, 2020
** str_to_array
** File description:
** str_to_array
*/

#include <stdlib.h>
#include <stdio.h>
#include "../my.h"

int nb_word(char *str, char c)
{
    int i = 0;
    int nb = 0;

    while (str[i] != '\0') {
        if (str[i] == c && str[i+1]) {
            nb = nb + 1;
        }
        i = i + 1;
    }
    return (nb+1);
}

char **malloc_line(char **tab, int nb)
{
    int i = 0;

    while (i != nb) {
        tab[i] = malloc(sizeof(char) * 10000);
        i = i + 1;
    }
    return (tab);
}

void aff_tab(char **tab)
{
    int i = 0;

    while (tab[i]) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i = i + 1;
    }
}

char **my_str_to_word_array(char *str, char c)
{
    int i = 0;
    int y = 0;
    int x = 0;
    int nb = nb_word(str, c);
    char **tab = malloc(sizeof(char *) * nb + 1);
    tab = malloc_line(tab, nb);
    while (y != nb) {
        while (str[i] != c && str[i] != '\0') {
            tab[y][x] = str[i];
            i = i + 1;
            x = x + 1;
        }
        tab[y][x] = '\0';
        x = 0;
        y = y + 1;
        i = i + 1;
    }
    tab[y] = NULL;
    return (tab);
}
