/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** interaction_dja
*/

#include "../../my.h"

void int_djb(sfRenderWindow *win, env_t *env)
{
    if (env->perso_pos.x >= 863 && env->perso_pos.x <= 870 &&
        env->perso_pos.y >= 170 && env->perso_pos.y <= 205){
            env->inter_pos.x = 858;
            env->inter_pos.y = 140;
            sfSprite_setPosition(env->inter, env->inter_pos);
            sfRenderWindow_drawSprite(win, env->inter, NULL);
        }
}

void lance_int_djb(sfRenderWindow *win, env_t *env)
{
    if (env->perso_pos.x >= 863 && env->perso_pos.x <= 870 &&
        env->perso_pos.y >= 170 && env->perso_pos.y <= 205){
            env->nb_feuille += 1;
        }
}