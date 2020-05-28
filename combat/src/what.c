/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** what.c
*/

#include "../../antoine.h"

void what_charac(statis_t *statis, sfRenderWindow *window)
{
    char *buffer = malloc(sizeof(char)* 20);
    char *nbuffer = malloc(sizeof(char)* 30);
    nbuffer = "combat/image/";
    buffer = ".png";
    buffer = my_strcat(statis->class, buffer);
    buffer = my_strcat(nbuffer, buffer);
    sfSprite *sprite;
    sprite = sfSprite_create();
    sfTexture *texture;
    texture = sfTexture_createFromFile(buffer, NULL);
    sfVector2f pos;
    pos.x = 1020;
    pos.y = 700;
    sfSprite_setPosition(sprite, pos);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_drawSprite(window, sprite, NULL);
}

void what_slime_one(statis_t *statis, sfRenderWindow *window)
{
    char *buffer = malloc(sizeof(char)* 20);
    char *nbuffer = malloc(sizeof(char)* 30);
    nbuffer = "combat/image/";
    buffer = ".png";
    buffer = my_strcat(statis->slime_one, buffer);
    buffer = my_strcat(nbuffer, buffer);
    sfSprite *sprite;
    sprite = sfSprite_create();
    sfTexture *texture;
    texture = sfTexture_createFromFile(buffer, NULL);
    sfVector2f pos;
    pos.x = 490;
    pos.y = 770;
    sfSprite_setPosition(sprite, pos);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_drawSprite(window, sprite, NULL);
}

void what_slime_two(statis_t *statis, sfRenderWindow *window)
{
    char *buffer = malloc(sizeof(char)* 20);
    char *nbuffer = malloc(sizeof(char)* 30);
    nbuffer = "combat/image/";
    buffer = ".png";
    buffer = my_strcat(statis->slime_two, buffer);
    buffer = my_strcat(nbuffer, buffer);
    sfSprite *sprite;
    sprite = sfSprite_create();
    sfTexture *texture;
    texture = sfTexture_createFromFile(buffer, NULL);
    sfVector2f pos;
    pos.x = 1350;
    pos.y = 770;
    sfSprite_setPosition(sprite, pos);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_drawSprite(window, sprite, NULL);

}

void what_slime_three(statis_t *statis, sfRenderWindow *window)
{
    char *buffer = malloc(sizeof(char)* 20);
    char *nbuffer = malloc(sizeof(char)* 30);
    nbuffer = "combat/image/";
    buffer = ".png";
    buffer = my_strcat(statis->slime_three, buffer);
    buffer = my_strcat(nbuffer, buffer);
    sfSprite *sprite;
    sprite = sfSprite_create();
    sfTexture *texture;
    texture = sfTexture_createFromFile(buffer, NULL);
    sfVector2f pos;
    pos.x = 770;
    pos.y = 770;
    sfSprite_setPosition(sprite, pos);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_drawSprite(window, sprite, NULL);
}

void what_slime(statis_t *statis, sfRenderWindow *window)
{
    what_slime_one(statis, window);
    what_slime_two(statis, window);
    what_slime_three(statis, window);
}