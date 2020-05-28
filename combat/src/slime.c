/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** slime.c
*/

#include "../../antoine.h"

int what_a_slime_one(statis_t *statis)
{
    int choose = 0;
    if (statis->slime_one[5] == '1')
        choose = 1;
    if (statis->slime_one[5] == '2')
        choose = 2;
    if (statis->slime_one[5] == '3')
        choose = 3;
    return (choose);
}

void create_slime_one(statis_t *statis)
{
    int choose = 0;
    choose = what_a_slime_one(statis);
    if (choose == 1) {
        statis->slime_one_atk = 10;
        statis->slime_one_type = 1;
    }
    if (choose == 2) {
        statis->slime_one_atk = 10;
        statis->slime_one_type = 2;
    }
    if (choose == 3) {
        statis->slime_one_atk = 10;
        statis->slime_one_type = 3;
    }
}

void create_slime_two(statis_t *statis)
{
    int choose = 0;
    choose = what_a_slime_two(statis);
    if (choose == 1) {
        statis->slime_two_atk = 10;
        statis->slime_two_type = 1;
    }
    if (choose == 2) {
        statis->slime_two_atk = 10;
        statis->slime_two_type = 2;
    }
    if (choose == 3) {
        statis->slime_two_atk = 10;
        statis->slime_two_type = 3;
    }
}

void create_slime_three(statis_t *statis)
{
    int choose = 0;
    choose = what_a_slime_three(statis);
    if (choose == 1) {
        statis->slime_three_atk = 10;
        statis->slime_three_type = 1;
    }
    if (choose == 2) {
        statis->slime_three_atk = 10;
        statis->slime_three_type = 2;
    }
    if (choose == 3) {
        statis->slime_three_atk = 10;
        statis->slime_three_type = 3;
    }
}