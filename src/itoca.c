/*
** EPITECH PROJECT, 2019
** itoca
** File description:
** itoca
*/
#include <stdlib.h>
#include <stdio.h>
#include "../my.h"

char *itoca(int i)
{
    int len = 0;
    int neg = 0;
    if (i == 0)
        len++;
    for (int k = i; k != 0; k = k/10, len++);
    if (i < 0) {
        len++;
        neg = 1;
        i = i * -1;
    }
    char *c = malloc(sizeof(char) * (len + 1));
    c[len] = '\0';
    len--;
    for (; len >= 0; len--) {
        c[len] = i % 10 + 48;
        i = i / 10;
    }
    if (neg)
        c[0] = '-';
    return (c);
}