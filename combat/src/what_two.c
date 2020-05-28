/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** what_two.c
*/

#include "../../antoine.h"

int what_a_slime_two(statis_t *statis)
{
    int choose = 0;
    if (statis->slime_two[5] == '1')
        choose = 1;
    if (statis->slime_two[5] == '2')
        choose = 2;
    if (statis->slime_two[5] == '3')
        choose = 3;
    return (choose);
}

int what_a_slime_three(statis_t *statis)
{
    int choose = 0;
    if (statis->slime_three[5] == '1')
        choose = 1;
    if (statis->slime_three[5] == '2')
        choose = 2;
    if (statis->slime_three[5] == '3')
        choose = 3;
    return (choose);
}

void what_boss(statis_t *statis, sfRenderWindow *window, char *w_donjon)
{
    char *buffer = malloc(sizeof(char)* 20);
    char *nbuffer = malloc(sizeof(char)* 30);
    nbuffer = "combat/image/";
    buffer = ".png";
    buffer = my_strcat(w_donjon, buffer);
    buffer = my_strcat(nbuffer, buffer);
    sfSprite *sprite;
    sprite = sfSprite_create();
    sfTexture *texture;
    texture = sfTexture_createFromFile(buffer, NULL);
    sfVector2f pos;
    pos.x = 870;
    pos.y = 400;
    sfSprite_setPosition(sprite, pos);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_drawSprite(window, sprite, NULL);
}

int what_a_boss(char *w_donjon)
{
    int choose = 0;
    if (w_donjon[0] == 's')
        choose = 1;
    if (w_donjon[0] == 'j')
        choose = 2;
    if (w_donjon[0] == 'm')
        choose = 3;
    return (choose);
}

void what_life(statis_t *statis, sfRenderWindow *window)
{
    life_monster(statis, window);
    life_hero(statis, window);
}