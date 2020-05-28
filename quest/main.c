/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** main.c
*/

#include "../antoine.h"

sfRenderWindow *create_wi(void)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {1900, 1100, 32};
    window = sfRenderWindow_create(video_mode, "Quest Menu",
        sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(window, 30);
    return (window);
}

void text_step_0(sfRenderWindow *window)
{
    sfSprite *sprite;
    sprite = sfSprite_create();
    sfTexture *texture;
    texture = sfTexture_createFromFile("quest/step0.png", NULL);
    sfVector2f pos;
    pos.x = -200;
    pos.y = 0;
    sfSprite_setPosition(sprite, pos);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_display(window);
}

void text_step_1(sfRenderWindow *window)
{
    sfSprite *sprite;
    sprite = sfSprite_create();
    sfTexture *texture;
    texture = sfTexture_createFromFile("quest/step1.png", NULL);
    sfVector2f pos;
    pos.x = -200;
    pos.y = 0;
    sfSprite_setPosition(sprite, pos);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_display(window);
}

void quest_main(void)
{
    sfRenderWindow *window = create_wi();
    sfMusic *ms;
    float  a = 3;
    sfTime b = sfSeconds(a);
    ms = sfMusic_createFromFile("quest/zeda.ogg");
    sfMusic_play(ms);
    sfRenderWindow_clear(window, sfBlack);
    text_step_0(window);
    sfSleep(b);
    text_step_1(window);
    sfSleep(b);
    text_step_2(window);
    sfSleep(b);
    text_step_3(window);
    sfSleep(b);
    sfMusic_destroy(ms);
    sfRenderWindow_destroy(window);
}
