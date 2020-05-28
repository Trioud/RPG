/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** interaction_dja
*/

#include "../../my.h"

void int_djc(sfRenderWindow *win, env_t *env)
{
    if (env->perso_pos.x >= 1110 && env->perso_pos.x <= 1120 &&
        env->perso_pos.y >= 315 && env->perso_pos.y <= 360){
            env->inter_pos.x = 1000;
            env->inter_pos.y = 340;
            sfSprite_setPosition(env->inter, env->inter_pos);
            sfRenderWindow_drawSprite(win, env->inter, NULL);
        }
}

void lance_int_djc(sfRenderWindow *win, env_t *env)
{
    if (env->perso_pos.x >= 1110 && env->perso_pos.x <= 1120 &&
        env->perso_pos.y >= 315 && env->perso_pos.y <= 360){
            env->nb_feuille += 1;
        }
}