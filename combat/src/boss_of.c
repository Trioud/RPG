/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** boss_of.c
*/

#include "../../antoine.h"

void boss_sable (statis_t *statis)
{
    statis->boss_vie = 150;
    statis->boss_atk = 15;
    statis->boss_res_p = 2;
    statis->boss_res_m = 8;
}

void boss_jardin (statis_t *statis)
{
    statis->boss_vie = 100;
    statis->boss_atk = 30;
    statis->boss_res_p = 0;
    statis->boss_res_m = 0;
}

void boss_mine (statis_t *statis)
{
    statis->boss_vie = 200;
    statis->boss_atk = 10;
    statis->boss_res_p = 8;
    statis->boss_res_m = 2;
}