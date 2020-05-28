/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** crit_dodge.c
*/

#include "../../antoine.h"

void affiche_crit(statis_t *statis, sfRenderWindow *window)
{
    statis->aff_crit = 0;
    sfSprite *sprite;
    sprite = sfSprite_create();
    sfTexture *texture;
    texture = sfTexture_createFromFile("combat/image/critique.png", NULL);
    sfVector2f pos;
    pos.x = 200;
    pos.y = 630;
    sfSprite_setPosition(sprite, pos);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_drawSprite(window, sprite, NULL);

}

void affiche_dodge(statis_t *statis, sfRenderWindow *window)
{
    statis->aff_esquive = 0;
    sfSprite *sprite;
    sprite = sfSprite_create();
    sfTexture *texture;
    texture = sfTexture_createFromFile("combat/image/dodge.png", NULL);
    sfVector2f pos;
    pos.x = 200;
    pos.y = 530;
    sfSprite_setPosition(sprite, pos);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_drawSprite(window, sprite, NULL);
}

void atk_button(sfRenderWindow *window)
{
    sfSprite *sprite;
    sprite = sfSprite_create();
    sfTexture *texture;
    texture = sfTexture_createFromFile("combat/image/bouton-attaque.png", NULL);
    sfVector2f pos;
    pos.x = 800;
    pos.y = 880;
    sfSprite_setPosition(sprite, pos);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_drawSprite(window, sprite, NULL);
}

void run_button(sfRenderWindow *window)
{
    sfSprite *sprite;
    sprite = sfSprite_create();
    sfTexture *texture;
    texture = sfTexture_createFromFile("combat/image/bouton-fuite.png", NULL);
    sfVector2f pos;
    pos.x = 0;
    pos.y = 0;
    sfSprite_setPosition(sprite, pos);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_drawSprite(window, sprite, NULL);
}