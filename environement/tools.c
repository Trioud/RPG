/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** tools
*/

#include "../my.h"

char *catcat(char *dest, char *src)
{
    int i = my_strlen(dest);
    int a = 0;
    int b = my_strlen(src);
    while (a != b) {
        dest[i] = src[a];
        a = a + 1;
        i = i + 1;
    }
    dest[i] = '\0';
    return (dest);
}

void set_filepath(env_t *env)
{
    env->filepath[0] = '.';
    env->filepath[1] = 's';
    env->filepath[2] = 'a';
    env->filepath[3] = 'v';
    env->filepath[4] = 'e';
    env->filepath[5] = 'f';
    env->filepath[6] = 'i';
    env->filepath[7] = 'l';
    env->filepath[8] = 'e';
    env->filepath[9] = 's';
    env->filepath[10] = '/';
}