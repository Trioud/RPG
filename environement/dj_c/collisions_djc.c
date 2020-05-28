/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** collisions_djc
*/

#include "../../my.h"

void left_dj_c(env_t *env)
{
    if (env->perso_pos.x <= 318)
        env->perso_pos.x += env->vitesse;
    if (env->perso_pos.x >= 1100 && env->perso_pos.x <= 1108 &&
        env->perso_pos.y >= 295 && env->perso_pos.y <= 615)
        env->perso_pos.x += env->vitesse;
    if (env->perso_pos.x >= 630 && env->perso_pos.x <= 638 &&
        env->perso_pos.y >= 405 && env->perso_pos.y <= 695)
        env->perso_pos.x += env->vitesse;
}

void right_dj_c(env_t *env)
{
    if (env->perso_pos.x >= 448 && env->perso_pos.x <= 455 &&
        env->perso_pos.y <= 696 && env->perso_pos.y >= 285)
        env->perso_pos.x -= env->vitesse;
    if (env->perso_pos.x >= 1318 && env->perso_pos.y >= 205 &&
        env->perso_pos.y <= 345)
        env->perso_pos.x -= env->vitesse;
    if (env->perso_pos.x >= 1278 && env->perso_pos.x <= 1285 &&
        env->perso_pos.y >= 345 && env->perso_pos.y <= 615)
        env->perso_pos.x -= env->vitesse;
    if (env->perso_pos.x >= 1318 && env->perso_pos.y >= 615 &&
        env->perso_pos.y <= 700)
        env->perso_pos.x -= env->vitesse;
    if (env->perso_pos.x >= 828 && env->perso_pos.x <= 835 &&
        env->perso_pos.y >= 405 && env->perso_pos.y <= 615)
        env->perso_pos.x -= env->vitesse;
}

void top_dj_c(env_t *env)
{
    if (env->perso_pos.y <= 200)
        env->perso_pos.y += env->vitesse;
    if (env->perso_pos.x <= 1313 && env->perso_pos.x >= 1288 &&
        env->perso_pos.y <= 630 && env->perso_pos.y >= 620)
        env->perso_pos.y += env->vitesse;
    if (env->perso_pos.x >= 853 && env->perso_pos.x <= 1111 &&
        env->perso_pos.y <= 615 && env->perso_pos.y >= 605)
        env->perso_pos.y += env->vitesse;
    if (env->perso_pos.x >= 640 && env->perso_pos.x <= 830 &&
        env->perso_pos.y <= 405 && env->perso_pos.y >= 396)
        env->perso_pos.y += env->vitesse;
}

void down_dj_c(env_t *env)
{
    if (env->perso_pos.y >= 700)
        env->perso_pos.y -= env->vitesse;
    if (env->perso_pos.x >= 1288 && env->perso_pos.x <= 1313 &&
        env->perso_pos.y >= 345 && env->perso_pos.y <= 355)
        env->perso_pos.y -= env->vitesse;
    if (env->perso_pos.x <= 1108 && env->perso_pos.x >= 448 &&
        env->perso_pos.y >= 285 && env->perso_pos.y <= 295)
        env->perso_pos.y -= env->vitesse;
}