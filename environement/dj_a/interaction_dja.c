/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** interaction_dja
*/

#include "../../my.h"

void int_dja(sfRenderWindow *win, env_t *env)
{
    if (env->perso_pos.x >= 260 && env->perso_pos.x <= 305 &&
        env->perso_pos.y >= 653 && env->perso_pos.y <= 680){
            env->inter_pos.x = 278;
            env->inter_pos.y = 640;
            sfSprite_setPosition(env->inter, env->inter_pos);
            sfRenderWindow_drawSprite(win, env->inter, NULL);
        }
}

void lance_int_dja(sfRenderWindow *win, env_t *env)
{
    if (env->perso_pos.x >= 260 && env->perso_pos.x <= 305 &&
        env->perso_pos.y >= 653 && env->perso_pos.y <= 680){
            env->nb_feuille += 1;
        }
}