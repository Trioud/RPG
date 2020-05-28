/*
** EPITECH PROJECT, 2020
** de
** File description:
** de
*/

#include "my.h"

void clock_sprites(struct rpg_t *y)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime(y->clock_sprite)) > 0.10 &&
    y->stop == 0) {
        sfClock_restart(y->clock_sprite);
        switch_it(y);
        if (y->logo_change == 0) {
            sfSprite_setTexture(y->logo_s, y->logo, sfTrue);
            y->logo_change = 1;
        }
        else {
            sfSprite_setTexture(y->logo_s, y->logo_bis, sfTrue);
            y->logo_change = 0;
        }
        y->sprites_change += 1;
        if (y->sprites_change == 5)
            y->sprites_change = 0;
    }
}

void switch_it(rpg_t *y)
{
    switch (y->sprites_change) {
    case 0:
        sfSprite_setTexture(y->car_s, y->car_one, sfTrue);
        break;
    case 1:
        sfSprite_setTexture(y->car_s, y->car_two, sfTrue);
        break;
    case 2:
        sfSprite_setTexture(y->car_s, y->car_three, sfTrue);
        break;
    case 3:
        sfSprite_setTexture(y->car_s, y->car_four, sfTrue);
        break;
    case 4:
        sfSprite_setTexture(y->car_s, y->car_five, sfTrue);
        break;
    }
}