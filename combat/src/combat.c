/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** combat.c
*/

#include "../../antoine.h"

int start_cbt(char *w_donjon, env_t *env)
{
    sfRenderWindow *window = create_win_cbt();
    if (combat(window, w_donjon, env) == 1)
        return (1);
    else
        return (2);
}

int combat (sfRenderWindow *window, char *w_donjon, env_t *env)
{
    statis_t *statis = malloc(sizeof(statis_t));
    element_t *elem = malloc(sizeof(element_t));
    create_element(elem, statis, w_donjon);
    statis->aff_crit = 0;
    statis->aff_esquive = 0;
    while (sfRenderWindow_isOpen(window))
    {
        affichage(window, elem, statis, w_donjon);
        turn(statis);
        if (statis->vie <= 0) {
            sfRenderWindow_destroy(window);
            return (1);
        }
        if (statis->boss_vie <= 0) {
            sfRenderWindow_destroy(window);
            return (2);
        }
    }
}