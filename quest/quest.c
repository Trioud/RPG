/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** quest.c
*/

#include "../antoine.h"

void text_step_2(sfRenderWindow *window)
{
    sfSprite *sprite;
    sprite = sfSprite_create();
    sfTexture *texture;
    texture = sfTexture_createFromFile("quest/step2.png", NULL);
    sfVector2f pos;
    pos.x = -200;
    pos.y = 0;
    sfSprite_setPosition(sprite, pos);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_display(window);
}

void text_step_3(sfRenderWindow *window)
{
    sfSprite *sprite;
    sprite = sfSprite_create();
    sfTexture *texture;
    texture = sfTexture_createFromFile("quest/step3.png", NULL);
    sfVector2f pos;
    pos.x = -200;
    pos.y = 0;
    sfSprite_setPosition(sprite, pos);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_display(window);
}