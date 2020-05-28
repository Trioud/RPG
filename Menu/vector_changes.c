/*
** EPITECH PROJECT, 2020
** de
** File description:
** de
*/

//-960
#include "my.h"

void mouse_cursor(struct rpg_t *y)
{
    sfRenderWindow_setMouseCursorVisible(y->window, sfFalse);
    y->mo = sfMouse_getPositionRenderWindow(y->window);
    y->cursor_v.x = y->mo.x - 20;
    y->cursor_v.y = y->mo.y - 20;
    sfSprite_setPosition(y->cursor_s, y->cursor_v);
}

void special_interactions(struct rpg_t *y)
{
    static int x;
    if (y->map_v.y == -960 && x == 0) {
        y->spook = sfClock_create();
        x = 1;
    }
    if (x == 1) {
        if (sfTime_asSeconds(sfClock_getElapsedTime(y->spook)) > 3)
            y->go_spook = 1;
        if (sfTime_asSeconds(sfClock_getElapsedTime(y->spook)) > 4) {
            y->go_spook = 0;
            sfClock_restart(y->spook);
        }
    }
}

void interaction(struct rpg_t *y)
{
    overlay(y);
    button_pressed(y);
    special_interactions(y);
}

void change_vectors(struct rpg_t *y)
{
    if (y->go_down == 1 && y->map_v.y != -960) {
        y->map_v.y -= 20;
        y->button_v.y += 20;
        y->text_v.y += 20;
        y->txt_saveone.y -= 20;
        y->txt_savetwo.y -= 20;
        y->txt_savethree.y -= 20;
        y->letter_v.y -= 20;
        y->lettertwo_v.y -= 20;
        y->letterthree_v.y -= 20;
        y->bigoverlay_v.y -= 20;
    }
}