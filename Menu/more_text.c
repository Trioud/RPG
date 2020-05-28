/*
** EPITECH PROJECT, 2020
** de
** File description:
** de
*/

#include "my.h"

void more_text(rpg_t *y)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime(y->intro)) >= 44 &&
    y->txt_pointer == 5) {
        y->anim_i = 0;
        y->txt_pointer = 6;
    }
    if (y->txt_pointer == 6 &&
    sfTime_asSeconds(sfClock_getElapsedTime(y->intro)) >= 49) {
        animated_strings("Wait.\nDid the car just stopped ?",
        y->car_txt, y->clock_txt, y);
        if (y->start_police == 2) {
            y->start_police = 3;
            y->stop = 1;
        }
    }
    if (sfTime_asSeconds(sfClock_getElapsedTime(y->intro)) >= 53) {
        sfSprite_setColor(y->car_s, sfBlack);
        sfRenderWindow_drawSprite(y->window, y->man_s, NULL);
    }
}