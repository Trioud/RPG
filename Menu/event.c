/*
** EPITECH PROJECT, 2020
** de
** File description:
** de
*/

#include "my.h"

void resize(rpg_t *y)
{
    if (y->event.type == sfEvtResized) {
        sfRenderWindow_setView(y->window, sfView_createFromRect((sfFloatRect)
        {0, 0, y->event.size.width, y->event.size.height}));
    }
}

void escape_key_m(rpg_t *y)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape) || y->event.type == sfEvtClosed) {
        sfMusic_destroy(y->bowser_menu);
        sfMusic_destroy(y->logo_sound);
        sfMusic_destroy(y->police_cars);
        sfRenderWindow_close(y->window);
    }
}