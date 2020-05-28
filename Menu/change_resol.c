/*
** EPITECH PROJECT, 2020
** de
** File description:
** de
*/

#include "my.h"

void size_one(struct rpg_t *y)
{
    sfRenderWindow_destroy(y->window);
    y->video_mode.height = 1080;
    y->video_mode.width = 1920;
    y->height = 1080;
    y->width = 1920;
    y->video_mode.bitsPerPixel = 32;
    y->window = sfRenderWindow_create(y->video_mode, "My_PRG",
    sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(y->window, 60);
}

void size_two(struct rpg_t *y)
{
    sfRenderWindow_destroy(y->window);
    y->video_mode.height = 900;
    y->video_mode.width = 1600;
    y->height = 900;
    y->width = 1600;
    y->window = sfRenderWindow_create(y->video_mode, "My_PRG",
    sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(y->window, 60);
}

void size_three(struct rpg_t *y)
{
    sfRenderWindow_destroy(y->window);
    y->video_mode.height = 768;
    y->video_mode.width = 1366;
    y->height = 768;
    y->width = 1366;
    y->window = sfRenderWindow_create(y->video_mode, "My_PRG",
    sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(y->window, 60);
}

void size_four(struct rpg_t *y)
{
    sfRenderWindow_destroy(y->window);
    y->video_mode.height = 720;
    y->video_mode.width = 1280;
    y->height = 720;
    y->width = 1280;
    y->window = sfRenderWindow_create(y->video_mode, "My_PRG",
    sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(y->window, 60);
}

void fullscreen(struct rpg_t *y)
{
    sfRenderWindow_destroy(y->window);
    y->video_mode.height = 1080;
    y->video_mode.width = 1920;
    y->height = 1080;
    y->width = 1920;
    y->window = sfRenderWindow_create(y->video_mode, "My_PRG",
    sfFullscreen, NULL);
    sfRenderWindow_setFramerateLimit(y->window, 60);
}
