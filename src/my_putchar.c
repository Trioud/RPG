/*
** EPITECH PROJECT, 2019
** dede
** File description:
** de
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
