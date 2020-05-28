/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** turn.c
*/

#include "../../antoine.h"

void me_dmg_boss(statis_t *statis)
{
    int atk = statis->force;
    int crit = 0;
    crit = rand() % 50;
    crit = crit + statis->intel;
    if (statis->type_arme == 1)
        atk = atk + statis->stat_arme;
    if (statis->type_arme == 2)
        crit = crit + statis->stat_arme;
    if (crit >= 80){
        atk = atk * 2;
        statis->aff_crit = 1;
    }
    statis->boss_vie = statis->boss_vie - atk;
}

void me_turn (statis_t *statis)
{
    float a = 1;
    sfTime b = sfSeconds(a);
    while (1) {
        if (sfKeyboard_isKeyPressed(sfKeySpace)) {
            me_dmg_boss(statis);
            break;
        }
        if (sfKeyboard_isKeyPressed(sfKeyA)) {
            statis->vie = -100;
            break;
        }
    }
    sfSleep(b);
}

void ally_turn (statis_t *statis)
{
    slime_one_turn(statis);
    slime_two_turn(statis);
    slime_three_turn(statis);
}

void enmy_turn (statis_t *statis)
{
    int esquive = 0;
    int armor = 0;
    int boss_atk = statis->boss_atk;
    esquive = rand() %50;
    esquive = esquive + statis->agi;
    if (statis->type_armor == 1)
        boss_atk = boss_atk - statis->stat_armor;
    if (statis->type_armor == 2)
        esquive = esquive + statis->stat_armor;
    if (esquive <= 80)
        statis->vie = statis->vie - statis->boss_atk;
    else
        statis->aff_esquive = 1;
}

void turn (statis_t *statis)
{
    me_turn(statis);
    ally_turn(statis);
    enmy_turn(statis);
}