/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** my_strcat
*/

#include "../antoine.h"

char *my_strcat(char *str1, char *str2)
{
    int len1 = my_strlen(str1);
    int len2 = my_strlen(str2);
    char *dest = malloc(sizeof(char)* len1 + len2 + 1);
    int i = 0;

    while (str1[i] != '\0') {
        dest[i] = str1[i];
        i++;
    }
    i = 0;
    while (str2[i] != '\0') {
        dest[len1 + i] = str2[i];
        i++;
    }
    dest[len1 + len2] = '\0';
    return (dest);
}
