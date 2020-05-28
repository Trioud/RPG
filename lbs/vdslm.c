/*
** EPITECH PROJECT, 2019
** slime rdm
** File description:
** main.c
*/

#include "antoine.h"

sfRenderWindow *create_win(void)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {1900, 1100, 32};
    window = sfRenderWindow_create(video_mode, "Slime loot",
        sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(window, 30);
    return (window);
}

char *nani_slimato(char *slime)
{
    if (slime[19] == '1')
        slime = "Slime1";
    if (slime[19] == '2')
        slime = "Slime2";
    if (slime[19] == '3')
        slime = "Slime3";
    return (slime);
}

void vdslm(void)
{
    sfRenderWindow *window = create_win();
    char *slime = malloc(sizeof(char)* 50);
    slime = Slime_rdm(window);
}