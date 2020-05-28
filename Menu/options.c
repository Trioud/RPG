/*
** EPITECH PROJECT, 2020
** de
** File description:
** de
*/

#include "my.h"

void deep_options_set(struct rpg_t *y)
{
    y->depht_v.x = 1100;
    y->depht_v.y = 375;
    sfSprite_setPosition(y->main_soundsn, y->depht_v);
    y->depht_v.x = 1250;
    sfSprite_setPosition(y->mainsound_sp, y->depht_v);
    y->depht_v.x = 630;
    sfText_setPosition(y->master_volume, y->depht_v);
    y->depht_v.y = 450;
    sfText_setPosition(y->sfx_volume, y->depht_v);
    y->depht_v.x = 1100;
    sfSprite_setPosition(y->sfx_sp, y->depht_v);
    y->depht_v.x = 1250;
    sfSprite_setPosition(y->sfx_sn, y->depht_v);
    y->depht_v.y = 525;
    y->depht_v.x = 630;
    sfText_setPosition(y->music_volume, y->depht_v);
    y->depht_v.x = 1250;
    sfSprite_setPosition(y->music_sn, y->depht_v);
    y->depht_v.x = 1100;
    sfSprite_setPosition(y->music_sp, y->depht_v);
    y->depht_v.y = 325;
    y->depht_v.x = 630;
    sfText_setPosition(y->muted_t, y->depht_v);
    y->depht_v.x = 1180;
    sfSprite_setPosition(y->muted_box, y->depht_v);
    y->depht_v.y = 600;
    y->depht_v.x = 630;
    sfText_setPosition(y->fullscreen_t, y->depht_v);
    y->depht_v.x = 1180;
    sfSprite_setPosition(y->fullscreen_box, y->depht_v);
    y->depht_v.y = 650;
    y->depht_v.x = 630;
    sfText_setPosition(y->resolution_t, y->depht_v);
    y->depht_v.x = 1100;
    sfSprite_setPosition(y->res_sp, y->depht_v);
    y->depht_v.x = 1250;
    sfSprite_setPosition(y->res_sn, y->depht_v);
    y->depht_v.x = 1120;
    sfText_setPosition(y->resolution_tv, y->depht_v);
    y->depht_v.x = 1180;
    y->depht_v.y = 375;
    sfText_setPosition(y->master_tv, y->depht_v);
    y->depht_v.y = 450;
    sfText_setPosition(y->sfx_tv, y->depht_v);
    y->depht_v.y = 525;
    sfText_setPosition(y->music_tv, y->depht_v);
}

void update(struct rpg_t *y)
{
    sfMusic_setVolume(y->bowser_menu, (y->muted_value * ((y->master_value/2) + (y->music_value/2))));
    if (y->fullscreen_value == 1) {
        fullscreen(y);
        return;
    }
    if (y->resolution_value == 4 && (y->resol_save != 4 || y->resol_fullscreen == 1))
        size_one(y);
    if (y->resolution_value == 3 && (y->resol_save != 3 || y->resol_fullscreen == 1))
        size_two(y);
    if (y->resolution_value == 2 && (y->resol_save != 2 || y->resol_fullscreen == 1))
        size_three(y);
    if (y->resolution_value == 1 && (y->resol_save != 1 || y->resol_fullscreen == 1))
        size_four(y);
}

void boxes(struct rpg_t *y)
{
    if (y->mo.x > 1182 && y->mo.x < 1182 + 28
    && 335 < y->mo.y && 335 + 27 > y->mo.y) {
        if (y->muted_value == 0) {
            y->muted_value = 1;
            sfSprite_setTexture(y->muted_box, y->checkbox, sfTrue);
        }
        else {
            y->muted_value = 0;
            sfSprite_setTexture(y->muted_box, y->checkbox_fill, sfTrue);
        }
    }
    if (y->mo.x > 1182 && y->mo.x < 1182 + 28
    && 607 < y->mo.y && 607 + 32 > y->mo.y) {
        if (y->fullscreen_value == 0) {
            y->fullscreen_value = 1;
            sfSprite_setTexture(y->fullscreen_box, y->checkbox_fill, sfTrue);
        }
        else {
            y->fullscreen_value = 0;
            sfSprite_setTexture(y->fullscreen_box, y->checkbox, sfTrue);
        }
    }
}

void arrows(struct rpg_t *y)
{
    if (y->mo.x > 1103 && y->mo.x < 1103 + 25
    && 389 < y->mo.y && 389 + 23 > y->mo.y && y->master_value != 0) {
        y->master_value -= 5;
    }
    if (y->mo.x > 1251 && y->mo.x < 1251 + 27
        && 389 < y->mo.y && 389 + 23 > y->mo.y && y->master_value != 100) {
        y->master_value += 5;
    }
    if (y->mo.x > 1102 && y->mo.x < 1102 + 27
        && 463 < y->mo.y && 463 + 26 > y->mo.y && y->sfx_value != 0) {
        y->sfx_value -= 5;
    }
    if (y->mo.x > 1255 && y->mo.x < 1255 + 27
        && 463 < y->mo.y && 463 + 26 > y->mo.y && y->sfx_value != 100) {
        y->sfx_value += 5;
    }
    if (y->mo.x > 1102 && y->mo.x < 1102 + 27
        && 540 < y->mo.y && 540 + 20 > y->mo.y && y->music_value != 0) {
        y->music_value -= 5;
    }
    if (y->mo.x > 1255 && y->mo.x < 1255 + 27
        && 540 < y->mo.y && 540 + 20 > y->mo.y && y->music_value != 100) {
        y->music_value += 5;
    }
    if (y->mo.x > 1102 && y->mo.x < 1102 + 27
        && 665 < y->mo.y && 665 + 21 > y->mo.y && y->resolution_value != 1) {
        y->resolution_value -= 1;
    }
    if (y->mo.x > 1255 && y->mo.x < 1255 + 27
        && 665 < y->mo.y && 665 + 21 > y->mo.y && y->resolution_value != 4) {
        y->resolution_value += 1;
    }
}

int deep_options(struct rpg_t *y)
{
    if (y->deep_options == 1)
        deep_options_set(y);
    if (y->event.type == sfEvtMouseButtonPressed && y->deep_options == 1) {
        boxes(y);
        arrows(y);
        if (y->mo.x > 1310 && y->mo.x < 1310 + 37
        && 213 < y->mo.y && 213 + 31 > y->mo.y) {
            y->deep_options = 0;
            y->see_options = 1;
            update(y);
            return (84);
        }
    }
}

void options_pressed(struct rpg_t *y)
{
    if (deep_options(y) == 84)
        return;
    if (y->event.type == sfEvtMouseButtonPressed && y->deep_options == 0) {
        if (y->mo.x > 1310 && y->mo.x < 1310 + 37
            && 213 < y->mo.y && 213 + 31 > y->mo.y)
            y->see_options = 0;
        if (y->mo.x > 727 && y->mo.x < 727 + 440
        && 327 < y->mo.y && 327 + 36 > y->mo.y)
            y->see_options = 0;
        if (y->mo.x > 727 && y->mo.x < 727 + 440
        && 382 < y->mo.y && 382 + 50 > y->mo.y) {
            y->deep_options = 1;
            y->resol_save = y->resolution_value;
            y->resol_fullscreen = y->fullscreen_value;
        }
        if (y->mo.x >= 727 && y->mo.x <= 727+440 && y->mo.y >= 437 && y->mo.y <= 499)
            htp();
        if (y->mo.x > 727 && y->mo.x < 727 + 440
        && 499 < y->mo.y && 499 + 50 > y->mo.y) {
            sfMusic_destroy(y->bowser_menu);
            sfMusic_destroy(y->logo_sound);
            sfMusic_destroy(y->police_cars);
            sfRenderWindow_close(y->window);
        }
    }
    if (y->see_options == 0)
        y->show_menulay = 0;
}

void more_options_overlay(struct rpg_t *y)
{
    if (y->mo.x > 727 && y->mo.x < 727 + 440
        && 434 < y->mo.y && 434 + 50 > y->mo.y) {
            y->show_menulay = 1;
            y->menulay_v.x = 727;
            y->menulay_v.y = 410;
    }
    else if (y->mo.x > 727 && y->mo.x < 727 + 440
        && 499 < y->mo.y && 499 + 50 > y->mo.y) {
            y->show_menulay = 1;
            y->menulay_v.x = 727;
            y->menulay_v.y = 475;
    }
    else
        y->show_menulay = 0;
}

void options_overlay(struct rpg_t *y)
{
    if (y->mo.x > 727 && y->mo.x < 727 + 440
        && 327 < y->mo.y && 327 + 50 > y->mo.y) {
            y->show_menulay = 1;
            y->menulay_v.x = 727;
            y->menulay_v.y = 300;
    }
    else if (y->mo.x > 727 && y->mo.x < 727 + 440
        && 382 < y->mo.y && 382 + 50 > y->mo.y) {
            y->show_menulay = 1;
            y->menulay_v.x = 727;
            y->menulay_v.y = 355;
    }
    else
        y->show_menulay = 0;
    if (y->show_menulay == 0)
        more_options_overlay(y);
}

void the_limits(struct rpg_t *y)
{
    if (y->master_value != 0)
        sfSprite_setTexture(y->main_soundsn, y->leftarr, sfTrue);
    else
        sfSprite_setTexture(y->main_soundsn, y->leftarr_stop, sfTrue);
    if (y->sfx_value != 0)
        sfSprite_setTexture(y->sfx_sp, y->leftarr, sfTrue);
    else
        sfSprite_setTexture(y->sfx_sp, y->leftarr_stop, sfTrue);
    if (y->music_value != 0)
        sfSprite_setTexture(y->music_sp, y->leftarr, sfTrue);
    else
        sfSprite_setTexture(y->music_sp, y->leftarr_stop, sfTrue);
    if (y->resolution_value != 1)
        sfSprite_setTexture(y->res_sp, y->leftarr, sfTrue);
    else
        sfSprite_setTexture(y->res_sp, y->leftarr_stop, sfTrue);
    if (y->master_value != 100)
        sfSprite_setTexture(y->mainsound_sp, y->rightarr, sfTrue);
    else
        sfSprite_setTexture(y->mainsound_sp, y->rightarr_stop, sfTrue);
    if (y->sfx_value != 100)
        sfSprite_setTexture(y->sfx_sn, y->rightarr, sfTrue);
    else
        sfSprite_setTexture(y->sfx_sn, y->rightarr_stop, sfTrue);
    if (y->music_value != 100)
        sfSprite_setTexture(y->music_sn, y->rightarr, sfTrue);
    else
        sfSprite_setTexture(y->music_sn, y->rightarr_stop, sfTrue);
    if (y->resolution_value != 4)
        sfSprite_setTexture(y->res_sn, y->rightarr, sfTrue);
    else
        sfSprite_setTexture(y->res_sn, y->rightarr_stop, sfTrue);
}

void resolution_set_strings(struct rpg_t *y)
{
    if (y->resolution_value == 4)
        sfText_setString(y->resolution_tv, "1920x1080");
    if (y->resolution_value == 3)
        sfText_setString(y->resolution_tv, "1600x900");
    if (y->resolution_value == 2)
        sfText_setString(y->resolution_tv, "1366x768");
    if (y->resolution_value == 1)
        sfText_setString(y->resolution_tv, "1280x720");
}

void options_specific_draw(struct rpg_t *y)
{
    the_limits(y);
    resolution_set_strings(y);
    sfText_setString(y->master_tv, ito(y->master_value));
    sfText_setString(y->sfx_tv, ito(y->sfx_value));
    sfText_setString(y->music_tv, ito(y->music_value));
    y->optionstxt_v.x = 860;
    y->optionstxt_v.y = 320;
    sfText_setPosition(y->optionsone, y->optionstxt_v);
    y->optionstxt_v.x = 910;
    y->optionstxt_v.y = 380;
    sfText_setPosition(y->optionstwo, y->optionstxt_v);
    y->optionstxt_v.y = 440;
    y->optionstxt_v.x = 880;
    sfText_setPosition(y->optionsthree, y->optionstxt_v);
    y->optionstxt_v.y = 500;
    y->optionstxt_v.x = 870;
    sfText_setPosition(y->optionsfour, y->optionstxt_v);
    if (y->deep_options == 1)
        sfSprite_setTexture(y->leave_ops_s, y->goback, sfTrue);
    else
        sfSprite_setTexture(y->leave_ops_s, y->leave_ops, sfTrue);
    if (y->see_options == 1) {
        sfRenderWindow_drawSprite(y->window, y->options_s, NULL);
        sfRenderWindow_drawSprite(y->window, y->leave_ops_s, NULL);
        if (y->deep_options == 0) {
            sfSprite_setPosition(y->menulay_s, y->menulay_v);
            sfRenderWindow_drawText(y->window, y->optionsone, NULL);
            sfRenderWindow_drawText(y->window, y->optionstwo, NULL);
            sfRenderWindow_drawText(y->window, y->optionsthree, NULL);
            sfRenderWindow_drawText(y->window, y->optionsfour, NULL);
            if (y->show_menulay != 0)
                sfRenderWindow_drawSprite(y->window, y->menulay_s, NULL);
        }
        else
        {
            sfRenderWindow_drawText(y->window, y->master_volume, NULL);
            sfRenderWindow_drawSprite(y->window, y->main_soundsn, NULL);
            sfRenderWindow_drawSprite(y->window, y->mainsound_sp, NULL);
            sfRenderWindow_drawSprite(y->window, y->sfx_sn, NULL);
            sfRenderWindow_drawSprite(y->window, y->sfx_sp, NULL);
            sfRenderWindow_drawText(y->window, y->sfx_volume, NULL);
            sfRenderWindow_drawText(y->window, y->music_volume, NULL);
            sfRenderWindow_drawSprite(y->window, y->music_sp, NULL);
            sfRenderWindow_drawSprite(y->window, y->music_sn, NULL);
            sfRenderWindow_drawText(y->window, y->muted_t, NULL);
            sfRenderWindow_drawSprite(y->window, y->muted_box, NULL);
            sfRenderWindow_drawSprite(y->window, y->fullscreen_box, NULL);
            sfRenderWindow_drawText(y->window, y->fullscreen_t, NULL);
            sfRenderWindow_drawText(y->window, y->resolution_t, NULL);
            sfRenderWindow_drawSprite(y->window, y->res_sn, NULL);
            sfRenderWindow_drawSprite(y->window, y->res_sp, NULL);
            sfRenderWindow_drawText(y->window, y->resolution_tv, NULL);
            sfRenderWindow_drawText(y->window, y->music_tv, NULL);
            sfRenderWindow_drawText(y->window, y->sfx_tv, NULL);
            sfRenderWindow_drawText(y->window, y->master_tv, NULL);
        }
    }
}