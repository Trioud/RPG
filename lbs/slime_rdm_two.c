/*
** EPITECH PROJECT, 2019
** slime rdm
** File description:
** Slime_rdm_two.c
*/

#include "antoine.h"

void af_f_one(int i, sfRenderWindow *window)
{
    float a = 1;
    sfTime b = sfSeconds(a);
    while (i < 3) {
        sfRenderWindow_clear(window, sfBlack);
        pre_roll(window);
        sfRenderWindow_display(window);
        sfSleep(b);
        i = i + 1;
    }
}

void af_f_two(int i, sfRenderWindow *window)
{
    float a = 1;
    sfTime b = sfSeconds(a);
    while (i < 3) {
        sfRenderWindow_clear(window, sfBlack);
        start_plosion(window);
        sfRenderWindow_display(window);
        sfSleep(b);
        i = i + 1;
    }
}

void af_f_trois(sfRenderWindow *window, char *slime)
{
    char *back = malloc(sizeof(char)* 50);
    char *mecha = malloc(sizeof(char)* 50);
    mecha = "lbs/animation_one/marsmars.jpg";
    back = "lbs/animation_one/explo_quatros.png";
    sfRenderWindow_clear(window, sfBlack);
    loot_anime_w8(window, mecha, 0, 0);
    loot_anime_w8(window, back, 335, -150);
    loot_anime_w8(window, slime, 1050, 750);
    sfRenderWindow_display(window);
}