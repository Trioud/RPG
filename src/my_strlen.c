/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** Displays and return characters
*/

int my_strlen(char *str)
{
    int i = 0;

    while (str[++i]);
    return (i);
}