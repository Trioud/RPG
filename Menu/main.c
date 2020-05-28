/*
** EPITECH PROJECT, 2020
** de
** File description:
** de
*/

#include "my.h"

void menu(struct rpg_t *y)
{
    if (intro(y) == 84)
        return;
    initialization_m(y);
    vector_initialization_m(y);
    texture_set_m(y);
    while (sfRenderWindow_isOpen(y->window)) {
        mouse_cursor(y);
        clock_sprites(y);
        change_vectors(y);
        while (sfRenderWindow_pollEvent(y->window, &y->event)) {
            interaction(y);
            escape_key_m(y);
            resize(y);
        }
        draw_m(y);
        sfRenderWindow_display(y->window);
    }
    if (y->create_char >= 1)
        create_window(y);
}

void default_values(struct rpg_t *y)
{
    y->muted_value = 1;
    y->master_value = 100;
    y->music_value = 100;
    y->sfx_value = 100;
    y->resolution_value = 4;
}

void create_window(struct rpg_t *y)
{
    default_values(y);
    y->video_mode.width = 1920;
    y->video_mode.height = 1080;
    y->video_mode.bitsPerPixel = 32;
    y->window = sfRenderWindow_create(y->video_mode, "My_RPG",
    sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(y->window, 60);
    if (y->create_char == 0)
        menu(y);
    else if (y->create_char == 2)
        start_hub(y->window, y->save_nb);
    else
        character_select(y);
}

int main(void)
{
    struct rpg_t *y = malloc(sizeof(rpg_t));
    create_window(y);
    return (0);
}