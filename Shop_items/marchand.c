/*
** EPITECH PROJECT, 2020
** de
** File description:
** de
*/

#include "my.h"

void mouse_cursor_mar(struct items_here *y)
{
    sfRenderWindow_setMouseCursorVisible(y->window, sfFalse);
    y->mo = sfMouse_getPositionRenderWindow(y->window);
    y->cursor_v.x = y->mo.x - 20;
    y->cursor_v.y = y->mo.y - 20;
    sfSprite_setPosition(y->cursor_s, y->cursor_v);
}

void initialization_mar(struct items_here *y)
{
    y->dialogues_int = 1;
    y->background = sfSprite_create();
    y->back = sfTexture_createFromFile("Marchassets/marchand2.jpg", NULL);
    sfSprite_setTexture(y->background, y->back, sfTrue);
    y->cursor = sfTexture_createFromFile("Marchassets/Cursors.png", NULL);
    y->cursor_s = sfSprite_create();
    sfSprite_setTexture(y->cursor_s, y->cursor, sfTrue);
    y->rect = (sfIntRect) {2, 3, 63, 61};
    sfSprite_setTextureRect(y->cursor_s, y->rect);
    y->gold = sfText_create();
    dialogue_init(y);
    sfText_setColor(y->gold, sfYellow);
    sfText_setFont(y->gold, y->fontos);
    sfText_setString(y->gold, ito(y->gold_int));
    sfText_setScale(y->gold, (sfVector2f) {2, 2});
    y->txt_v.y = 960;
    y->txt_v.x = 160;
    sfText_setPosition(y->gold, y->txt_v);
}

void first_and_second_rows(struct items_here *y)
{
    int yes_or_no = 0;
    static int x;
    yes_or_no += first_rows(y);
    yes_or_no += second_rows(y);
    yes_or_no += third_rows(y);
    yes_or_no += fourth_rows(y);
    yes_or_no += fifth_rows(y);
    if (yes_or_no == 84) {
        sfText_setString(y->dialogues, "You don't have enough.");
        x++;
    }
    else
        x = 0;
    if (x >= 15)
        sfText_setString(y->dialogues, "Can you\nSTOP WASTING \nMY TIME !");
}

void interactions(struct items_here *y)
{
    if (y->event.type == sfEvtMouseButtonPressed) {
        if (y->mo.x > 1831 && y->mo.x < 1831 + 49
        && 39 < y->mo.y && 39 + 50 > y->mo.y) {
            sfRenderWindow_close(y->window);
            return;
        }
        first_and_second_rows(y);
        if (y->mo.x > 1573 && y->mo.x < 1573 + 346
        && 757 < y->mo.y && 757 + 276 > y->mo.y)
            discussion(y);
    }
}

void marchand(struct items_here *y)
{
    initialization_mar(y);
    while (sfRenderWindow_isOpen(y->window)) {
        mouse_cursor_mar(y);
        check_yo_money(y);
        while (sfRenderWindow_pollEvent(y->window, &y->event)) {
            interactions(y);
        }
        sfText_setString(y->gold, ito(y->gold_int));
        sfRenderWindow_drawSprite(y->window, y->background, NULL);
        sfRenderWindow_drawText(y->window, y->gold, NULL);
        sfRenderWindow_drawText(y->window, y->dialogues, NULL);
        sfRenderWindow_drawSprite(y->window, y->cursor_s, NULL);
        sfRenderWindow_display(y->window);
    }
}
