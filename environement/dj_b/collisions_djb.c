/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** collision_djb
*/

#include "../../my.h"

void left_dj_b(env_t *env)
{
    if (env->perso_pos.x <= 308)
        env->perso_pos.x += env->vitesse;
    if (env->perso_pos.x <= 858 && env->perso_pos.x >= 850 &&
        env->perso_pos.y >= 145 && env->perso_pos.y <= 230)
        env->perso_pos.x += env->vitesse;
    if (env->perso_pos.x <= 858 && env->perso_pos.x >= 850 &&
        env->perso_pos.y >= 305 && env->perso_pos.y <= 725)
        env->perso_pos.x += env->vitesse;
    if (env->perso_pos.x <= 504 && env->perso_pos.x >= 496 &&
        env->perso_pos.y >= 145 && env->perso_pos.y <= 475)
        env->perso_pos.x += env->vitesse;
    if (env->perso_pos.x <= 638 && env->perso_pos.x <= 630 &&
        env->perso_pos.y >= 475 && env->perso_pos.y <= 582)
        env->perso_pos.x += env->vitesse;
}

void right_dj_b(env_t *env)
{
    if (env->perso_pos.y >= 145 && env->perso_pos.y <= 590 &&
        env->perso_pos.x >= 393 && env->perso_pos.x <= 410)
        env->perso_pos.x -= env->vitesse;
    if (env->perso_pos.y >= 145 && env->perso_pos.y <= 230 &&
        env->perso_pos.x >= 743 && env->perso_pos.x <= 760)
        env->perso_pos.x -= env->vitesse;
    if (env->perso_pos.y >= 305 && env->perso_pos.y <= 725 &&
        env->perso_pos.x >= 743 && env->perso_pos.x <= 760)
        env->perso_pos.x -= env->vitesse;
    if (env->perso_pos.x >= 1313)
        env->perso_pos.x -= env->vitesse;
}

void top_dj_b(env_t *env)
{
    if (env->perso_pos.y <= 145)
        env->perso_pos.y += env->vitesse;
    if (env->perso_pos.x >= 393 && env->perso_pos.x <= 623 &&
        env->perso_pos.y <= 595 && env->perso_pos.y >= 585)
        env->perso_pos.y += env->vitesse;
    if (env->perso_pos.x >= 748 && env->perso_pos.x <= 848 &&
        env->perso_pos.y <= 230 && env->perso_pos.y >= 220)
        env->perso_pos.y += env->vitesse;
}

void down_dj_b(env_t *env)
{
    if (env->perso_pos.y >= 730)
        env->perso_pos.y -= env->vitesse;
    if (env->perso_pos.x >= 508 && env->perso_pos.x <= 635 &&
        env->perso_pos.y >= 475 && env->perso_pos.y <= 485)
        env->perso_pos.y -= env->vitesse;
    if (env->perso_pos.x >= 748 &&  env->perso_pos.x <= 858 &&
        env->perso_pos.y >= 280 && env->perso_pos.y <= 300)
        env->perso_pos.y -= env->vitesse;
}