/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** main.c
*/

#include "../antoine.h"

sfRenderWindow *create_ouinedoze(void)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {1900, 1100, 32};
    window = sfRenderWindow_create(video_mode, "How to play",
    sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(window, 30);
    return (window);
}

void aff_to_play(sfRenderWindow *window)
{
    sfSprite *sprite;
    sprite = sfSprite_create();
    sfTexture *texture;
    texture = sfTexture_createFromFile("htp/howtoplay_ptone.png", NULL);
    sfVector2f pos;
    pos.x = 0;
    pos.y = 0;
    sfSprite_setPosition(sprite, pos);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_drawSprite(window, sprite, NULL);
}

void htp(void)
{
    sfRenderWindow *window = create_ouinedoze();
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
        aff_to_play(window);
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
}