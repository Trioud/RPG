/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** main.c
*/

#include "../antoine.h"

sfRenderWindow *create_lvlup(void)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {1900, 1100, 32};
    window = sfRenderWindow_create(video_mode, "level up",
        sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(window, 30);
    return (window);
}

void affiche_fond_lvl_up(sfRenderWindow *window)
{
    sfSprite *sprite;
    sprite = sfSprite_create();
    sfTexture *texture;
    texture = sfTexture_createFromFile("lvlup/lvl_up_up.jpg", NULL);
    sfVector2f pos;
    pos.x = 0;
    pos.y = 0;
    sfSprite_setPosition(sprite, pos);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_drawSprite(window, sprite, NULL);
}

void create_lvl_up(sfRenderWindow *window)
{
    affiche_fond_lvl_up(window);
}

void lvlup(void)
{
    sfRenderWindow *window = create_lvlup();
    while (sfRenderWindow_isOpen(window)) {
        sfVector2i pos_mouse = sfMouse_getPositionRenderWindow(window);
        sfVector2f pos_mouse2;
        pos_mouse2.x = (float)pos_mouse.x;
        pos_mouse2.y = (float)pos_mouse.y;
        sfRenderWindow_clear(window, sfBlack);
        create_lvl_up(window);
        sfRenderWindow_display(window);
        if (sfMouse_isButtonPressed(sfMouseRight)) {
            break;
        }
    }
    sfRenderWindow_destroy(window);
}