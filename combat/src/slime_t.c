/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** slime_t.c
*/

#include "../../antoine.h"

void slime_one_turn(statis_t *statis)
{
    int atk = statis->slime_one_atk;
    if (statis->slime_one_type == 1) {
        atk = atk - statis->boss_res_p;
        statis->boss_vie = statis->boss_vie - atk;
    }
    if (statis->slime_one_type == 2) {
        atk = atk - statis->boss_res_m;
        statis->boss_vie = statis->boss_vie - atk;
    }
    if (statis->slime_one_type == 3)
        statis->vie = statis->vie + atk;
}

void slime_two_turn(statis_t *statis)
{
    int atk = statis->slime_two_atk;
    if (statis->slime_two_type == 1) {
        atk = atk - statis->boss_res_p;
        statis->boss_vie = statis->boss_vie - atk;
    }
    if (statis->slime_two_type == 2) {
        atk = atk - statis->boss_res_m;
        statis->boss_vie = statis->boss_vie - atk;
    }
    if (statis->slime_two_type == 3)
        statis->vie = statis->vie + atk;
}

void slime_three_turn(statis_t *statis)
{
    int atk = statis->slime_three_atk;
    if (statis->slime_three_type == 1) {
        atk = atk - statis->boss_res_p;
        statis->boss_vie = statis->boss_vie - atk;
    }
    if (statis->slime_three_type == 2) {
        atk = atk - statis->boss_res_m;
        statis->boss_vie = statis->boss_vie - atk;
    }
    if (statis->slime_three_type == 3) {
        statis->vie = statis->vie + atk;
    }
}