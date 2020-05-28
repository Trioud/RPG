/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** colision_dja
*/

#include "../../my.h"

void left_dj_a(env_t *env)
{
    if (env->perso_pos.x <= 248) {
        env->perso_pos.x += env->vitesse;
    }
    if (env->perso_pos.x >= 1170 && env->perso_pos.x <= 1183 &&
        env->perso_pos.y <= 605)
        env->perso_pos.x += env->vitesse;
    if (env->perso_pos.x >= 540 && env->perso_pos.x <= 568 &&
        env->perso_pos.y >= 450 && env->perso_pos.y <= 655)
        env->perso_pos.x += env->vitesse;
    if (env->perso_pos.x <= 353 && env->perso_pos.x >= 340 &&
        env->perso_pos.y >= 215 && env->perso_pos.y <= 435)
        env->perso_pos.x += env->vitesse;

}

void right_dj_a(env_t *env)
{
    if (env->perso_pos.x >= 1315)
        env->perso_pos.x -= env->vitesse;
    if (env->perso_pos.x >= 678 && env->perso_pos.x <= 690 &&
        env->perso_pos.y >= 215 && env->perso_pos.y <= 625)
        env->perso_pos.x -= env->vitesse;
}

void top_dj_a(env_t *env)
{
    if (env->perso_pos.y <= 210) {
        env->perso_pos.y += env->vitesse;
    }
    if (env->perso_pos.x <= 1173 && env->perso_pos.x >= 683 &&
        env->perso_pos.y >= 610 && env->perso_pos.y <= 620)
        env->perso_pos.y += env->vitesse;
    if (env->perso_pos.x >= 253 && env->perso_pos.x <= 573 &&
        env->perso_pos.y <= 650 && env->perso_pos.y >= 640)
        env->perso_pos.y += env->vitesse;
}

void down_dj_a(env_t *env)
{
    if (env->perso_pos.y >= 703)
        env->perso_pos.y -= env->vitesse;
    if (env->perso_pos.x <= 575 && env->perso_pos.x >= 253 &&
        env->perso_pos.y >= 440 && env->perso_pos.y <= 450)
        env->perso_pos.y -= env->vitesse;
}