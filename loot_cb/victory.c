/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** victory
*/

#include "../my.h"

sfRenderWindow *create_vic(void)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {1900, 1100, 32};
    window = sfRenderWindow_create(video_mode, "End Combat",
        sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(window, 30);
    return (window);
}

void def(sfRenderWindow *window)
{
    sfSprite *sprite;
    sprite = sfSprite_create();
    sfTexture *texture;
    texture = sfTexture_createFromFile("map/def.jpg", NULL);
    sfVector2f pos;
    pos.x = 0;
    pos.y = 0;
    sfSprite_setPosition(sprite, pos);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_drawSprite(window, sprite, NULL);
}

void vic(sfRenderWindow *window)
{
    sfSprite *sprite;
    sprite = sfSprite_create();
    sfTexture *texture;
    texture = sfTexture_createFromFile("map/vic.jpg", NULL);
    sfVector2f pos;
    pos.x = 0;
    pos.y = 0;
    sfSprite_setPosition(sprite, pos);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_drawSprite(window, sprite, NULL);
}

void end_cbt(int i)
{
    sfRenderWindow *window = create_vic();
    while (sfRenderWindow_isOpen(window)) {
        sfVector2i pos_mouse = sfMouse_getPositionRenderWindow(window);
        sfVector2f pos_mouse2;
        pos_mouse2.x = (float)pos_mouse.x;
        pos_mouse2.y = (float)pos_mouse.y;
        if (pos_mouse2.x >= 1400 && pos_mouse2.x <= 1550 && pos_mouse2.y >= 30
            && pos_mouse2.y <= 120 && sfMouse_isButtonPressed(sfMouseLeft)) {
            break;
        }
        sfRenderWindow_clear(window, sfBlack);
        if (i == 1)
            def(window);
        if (i == 2)
            vic(window);
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
}