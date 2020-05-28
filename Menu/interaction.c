/*
** EPITECH PROJECT, 2020
** de
** File description:
** d
*/

#include "my.h"

void overlay(struct rpg_t *y)
{
    if (y->deep_options == 1)
        return;
    if (y->see_options == 1) {
        options_overlay(y);
        return;
    }
    overlay_bis(y);
    if (y->mo.x > 560 && y->mo.x < 560 + 788
        && 414 < y->mo.y && 414 + 120 > y->mo.y && y->map_v.y == -960) {
            y->overlay_int = 1;
            y->bigoverlay_v.y = 400;
            y->bigoverlay_v.x = 540;
    }
    else if (y->mo.x > 560 && y->mo.x < 560 + 788
        && 635 < y->mo.y && 635 + 120 > y->mo.y && y->map_v.y == -960) {
        y->overlay_int = 2;
        y->bigoverlay_v.y = 620;
        y->bigoverlay_v.x = 540;
    }
    else
        y->overlay_int = 0;
    if (y->mo.x > 560 && y->mo.x < 560 + 788
        && 852 < y->mo.y && 852 + 120 > y->mo.y && y->map_v.y == -960) {
            y->overlay_int = 3;
            y->bigoverlay_v.y = 840;
            y->bigoverlay_v.x = 540;
    }
}

void overlay_bis(struct rpg_t *y)
{
    if (y->mo.x > 792 && y->mo.x < 792 + 400
        && 812 < y->mo.y && 812 + 80 > y->mo.y && y->go_down == 0)
            y->overlay = 1;
    else
        y->overlay = 0;
}

int is_he_sure_interac(struct rpg_t *y)
{

    if (y->mo.x > 774 && y->mo.x < 774 + 406
    && 674 < y->mo.y && 674 + 70 > y->mo.y) {
        y->is_he_sure_int = 1;
        y->menulay_v.y = 650;
        y->menulay_v.x = 735;
    }
    else if (y->mo.x > 774 && y->mo.x < 774 + 406
    && 710 < y->mo.y && 710 + 70 > y->mo.y) {
        y->is_he_sure_int = 1;
        y->menulay_v.y = 730;
    }
    else
        y->is_he_sure_int = 0;
    sfSprite_setPosition(y->menulay_s, y->menulay_v);
    if (y->event.type == sfEvtMouseButtonPressed) {
        if (y->mo.x > 1310 && y->mo.x < 1310 + 37
        && 213 < y->mo.y && 213 + 31 > y->mo.y)
            return (84);
        if (y->mo.x > 774 && y->mo.x < 774 + 406
        && 674 < y->mo.y && 674 + 70 > y->mo.y)
            return (1);
        if (y->mo.x > 774 && y->mo.x < 774 + 406
        && 710 < y->mo.y && 710 + 70 > y->mo.y)
            return (84);

    }
}

int is_he_sure(struct rpg_t *y)
{
    y->is_he_sure_int = 0;
    int stock = 0;
    y->are_you_sure = sfText_create();
    y->yes_and_no = sfText_create();
    sfText_setFont(y->are_you_sure, y->font);
    sfText_setFont(y->yes_and_no, y->font);
    sfText_setString(y->are_you_sure, "Are you sure you want to delete this save ?");
    sfText_setString(y->yes_and_no, "Yes\n\nNo");
    y->delete_save_v.x = 710;
    y->delete_save_v.y = 365;
    sfText_setPosition(y->are_you_sure, y->delete_save_v);
    y->delete_save_v.x = 950;
    y->delete_save_v.y = 680;
    sfText_setPosition(y->yes_and_no, y->delete_save_v);
    while (1) {
        mouse_cursor(y);
        if (stock == 84)
            return (84);
        if (stock == 1)
            return (0);
        while (sfRenderWindow_pollEvent(y->window, &y->event)) {
            stock = is_he_sure_interac(y);
            escape_key_m(y);
        }
        sfRenderWindow_drawSprite(y->window, y->background_s, NULL);
        sfRenderWindow_drawSprite(y->window, y->options_s, NULL);
        sfRenderWindow_drawSprite(y->window, y->leave_ops_s, NULL);
        sfRenderWindow_drawText(y->window, y->yes_and_no, NULL);
        sfRenderWindow_drawText(y->window, y->are_you_sure, NULL);
        if (y->is_he_sure_int == 1)
            sfRenderWindow_drawSprite(y->window, y->menulay_s, NULL);
        sfRenderWindow_drawSprite(y->window, y->cursor_s, NULL);
        sfRenderWindow_display(y->window);
    }
}

void erase_one(struct rpg_t *y)
{
    FILE *fd;
    fd = fopen(".savefiles/saveone", "w");
    fwrite("?", 1, sizeof("?"), fd);
    y->new_one = 1;
    sfText_setString(y->save_one, "Click here to begin...");
    sfSprite_setTexture(y->letter_s, y->letter_t, sfTrue);
    fclose(fd);
}

void erase_two(struct rpg_t *y)
{
    FILE *fd;
    fd = fopen(".savefiles/savetwo", "w");
    fwrite("?", 1, sizeof("?"), fd);
    y->new_two = 1;
    sfText_setString(y->save_two, "Click here to begin...");
    sfSprite_setTexture(y->lettertwo_s, y->letter_t, sfTrue);
    fclose(fd);
}

void erase_three(struct rpg_t *y)
{
    FILE *fd;
    fd = fopen(".savefiles/savethree", "w");
    fwrite("?", 1, sizeof("?"), fd);
    y->new_three = 1;
    sfText_setString(y->save_three, "Click here to begin...");
    sfSprite_setTexture(y->letterthree_s, y->letter_t, sfTrue);
    fclose(fd);
}

void did_he_had_save(struct rpg_t *y)
{
    if (y->mo.x > 1378 && y->mo.x < 1378 + 22
        && 467 < y->mo.y && 467 + 26 > y->mo.y)
        erase_one(y);
    if (y->mo.x > 1378 && y->mo.x < 1378 + 22
        && 692 < y->mo.y && 692 + 26 > y->mo.y)
        erase_two(y);
    if (y->mo.x > 1378 && y->mo.x < 1378 + 22
        && 906 < y->mo.y && 906 + 26 > y->mo.y)
        erase_three(y);
    if (y->mo.x > 560 && y->mo.x < 560 + 788
        && 414 < y->mo.y && 414 + 120 > y->mo.y && y->map_v.y == -960) {
        if (y->new_one == 1)
            y->create_char = 1;
        else
            y->create_char = 2;
        sfRenderWindow_close(y->window);
        sfMusic_stop(y->bowser_menu);
        y->save_nb = 1;
    }
    if (y->mo.x > 560 && y->mo.x < 560 + 788
        && 635 < y->mo.y && 635 + 120 > y->mo.y && y->map_v.y == -960) {
        if (y->new_two == 1)
            y->create_char = 1;
        else
            y->create_char = 2;
        sfRenderWindow_close(y->window);
        sfMusic_stop(y->bowser_menu);
        y->save_nb = 2;
    }
    if (y->mo.x > 560 && y->mo.x < 560 + 788
        && 852 < y->mo.y && 852 + 120 > y->mo.y && y->map_v.y == -960) {
        if (y->new_three == 1)
            y->create_char = 1;
        else
            y->create_char = 2;
        sfRenderWindow_close(y->window);
        sfMusic_stop(y->bowser_menu);
        y->save_nb = 3;
    }
}

void button_pressed(struct rpg_t *y)
{
    if (y->see_options == 1) {
        options_pressed(y);
        return;
    }
    if (y->event.type == sfEvtMouseButtonPressed) {
        if (y->mo.x > 792 && y->mo.x < 792 + 400
            && 812 < y->mo.y && 812 + 80 > y->mo.y && y->see_options != 1)
            y->go_down = 1;
        if (y->mo.x > 1758 && y->mo.x < 1758 + 100
            && 914 < y->mo.y && 914 + 80 > y->mo.y)
            y->see_options = 1;
        if (y->map_v.y == -960)
            did_he_had_save(y);
    }
}