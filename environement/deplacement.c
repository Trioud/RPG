/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** deplacement
*/

#include "../my.h"

void go_left(env_t *env)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(env->move_perso)) > 20) {
        env->x += 31;
        if (env->x >= 90)
            env->x = 0;
        env->y = 32;
        env->perso_anim = (sfIntRect){env->x, env->y, 30, 30};
        sfSprite_setTextureRect(env->perso, env->perso_anim);
        env->perso_pos.x -= env->vitesse;
    }
    sfClock_restart(env->move_perso);
}

void go_right(env_t *env)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(env->move_perso)) > 20) {
        env->x += 31;
        if (env->x >= 90)
            env->x = 0;
        env->y = 64;
        env->perso_anim = (sfIntRect){env->x, env->y, 30, 30};
        sfSprite_setTextureRect(env->perso, env->perso_anim);
        env->perso_pos.x += env->vitesse;
    }
    sfClock_restart(env->move_perso);
}

void go_top(env_t *env)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(env->move_perso)) > 20) {
        env->x += 31;
        if (env->x >= 90)
            env->x = 0;
        env->y = 96;
        env->perso_anim = (sfIntRect){env->x, env->y, 30, 30};
        sfSprite_setTextureRect(env->perso, env->perso_anim);
        env->perso_pos.y -= env->vitesse;
    }
    sfClock_restart(env->move_perso);
}

void go_down(env_t *env)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(env->move_perso)) > 20) {
        env->x += 31;
        if (env->x >= 90)
            env->x = 0;
        env->y = 0;
        env->perso_anim = (sfIntRect){env->x, env->y, 30, 30};
        sfSprite_setTextureRect(env->perso, env->perso_anim);
        env->perso_pos.y += env->vitesse;
    }
    sfClock_restart(env->move_perso);
}

void deplacement(env_t *env)
{
    if (sfKeyboard_isKeyPressed(sfKeyQ)) {
            go_left(env);
    }
    if (sfKeyboard_isKeyPressed(sfKeyD)) {
            go_right(env);
    }
    if (sfKeyboard_isKeyPressed(sfKeyZ)) {
            go_top(env);
    }
    if (sfKeyboard_isKeyPressed(sfKeyS)) {
            go_down(env);
    }
}