/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** collisions_hub
*/

#include "../../my.h"

void is_block_left(env_t *env)
{
    if (env->perso_pos.x <= 570 && env->perso_pos.y >= 473+20 &&
        env->perso_pos.y <= 690) {
        env->perso_pos.x += env->vitesse;
    }
    if (env->perso_pos.x >= 810 && env->perso_pos.x <= 832 &&
        env->perso_pos.y >= 333 && env->perso_pos.y <= 460) {
        env->perso_pos.x += env->vitesse;
    }
    if (env->perso_pos.x >= 1150 && env->perso_pos.x <= 1166 &&
        env->perso_pos.y >= 555 && env->perso_pos.y <= 635) {
        env->perso_pos.x += env->vitesse;
    }
    if (env->perso_pos.x <= 192)
        env->perso_pos.x += env->vitesse;
}

void is_block_right(env_t *env)
{
    if (env->perso_pos.x >= 1295+25)
        env->perso_pos.x -= env->vitesse;
    if (env->perso_pos.x >= 647 && env->perso_pos.x <= 670 &&
        env->perso_pos.y >= 336 && env->perso_pos.y <= 460)
        env->perso_pos.x -= env->vitesse;
    if (env->perso_pos.x >= 1076 && env->perso_pos.x <= 1090 &&
        env->perso_pos.y >= 555 && env->perso_pos.y <=  635)
        env->perso_pos.x -= env->vitesse;


}

void is_block_top(env_t *env)
{
    if (env->perso_pos.x >= 193 && env->perso_pos.x <= 573 &&
        env->perso_pos.y <= 690 && env->perso_pos.y >= 670)
        env->perso_pos.y += env->vitesse;
    if (env->perso_pos.x >= 665 && env->perso_pos.x <= 825 &&
        env->perso_pos.y >= 425 && env->perso_pos.y <= 460)
        env->perso_pos.y += env->vitesse;
    if (env->perso_pos.y <= 216 && env->perso_pos.x >= 193 &&
        env->perso_pos.x <= 711)
        env->perso_pos.y += env->vitesse;
    if (env->perso_pos.y <= 216 && env->perso_pos.x >= 799 &&
        env->perso_pos.x <= 1319)
        env->perso_pos.y += env->vitesse;
    if (env->perso_pos.y <= 652 && env->perso_pos.y >= 640 &&
        env->perso_pos.x >= 1080 && env->perso_pos.x <= 1164)
        env->perso_pos.y += env->vitesse;
}

void is_block_down(env_t *env)
{
    if (env->perso_pos.x >= 193 && env->perso_pos.x <= 573 &&
        env->perso_pos.y >= 473+20 && env->perso_pos.y <= 480+20)
        env->perso_pos.y -= env->vitesse;
    if (env->perso_pos.x >= 1080 && env->perso_pos.x <= 1164 &&
        env->perso_pos.y >= 555 && env->perso_pos.y <= 570)
        env->perso_pos.y -= env->vitesse;
    if (env->perso_pos.x >= 650 && env->perso_pos.x <= 828 &&
        env->perso_pos.y >= 332 && env->perso_pos.y <= 350)
        env->perso_pos.y -= env->vitesse;
    if (env->perso_pos.y >= 733+16)
        env->perso_pos.y -= env->vitesse;
}