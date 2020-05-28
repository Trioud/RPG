/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** combat_define
*/

#include "../../antoine.h"

sfRenderWindow *create_win_cbt(void)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {1900, 1100, 32};
    window = sfRenderWindow_create(video_mode, "Combat", sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(window, 30);
    return (window);
}

void affiche_button(sfRenderWindow *window)
{
    atk_button(window);
    run_button(window);
}

void affiche_charac(statis_t *statis, sfRenderWindow *window, char *w_donjon)
{
    what_charac(statis, window);
    what_slime(statis, window);
    what_boss(statis, window, w_donjon);
    what_life(statis, window);
}

void affiche_hitormiss(statis_t *statis, sfRenderWindow *window)
{
    if (statis->aff_crit == 1)
        affiche_crit(statis, window);
    if (statis->aff_esquive == 1)
        affiche_dodge(statis, window);
}

void affichage(sfRenderWindow *win, element_t *el, statis_t *sta, char *w_donj)
{
    sfRenderWindow_clear(win, sfBlack);
    sfRenderWindow_drawSprite(win, el->sprite_back, NULL);
    affiche_hitormiss(sta, win);
    affiche_charac(sta, win, w_donj);
    sfRenderWindow_display(win);
}