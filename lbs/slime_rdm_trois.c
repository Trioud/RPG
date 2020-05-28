/*
** EPITECH PROJECT, 2019
** slime rdm
** File description:
** Slime_rdm_trois.c
*/

#include "antoine.h"

char *end_roll(char *pof_slime)
{
    int static anime = 0;
    while (1) {
        if (anime == 0) {
            anime = anime + 1;
            pof_slime = "lbs/animation_one/Antidote 1.png";
            break;
        }
        if (anime == 1) {
            anime = anime + 1;
            pof_slime = "lbs/animation_one/Antidote 2.png";
            break;
        }
        if (anime == 2) {
            anime = 0;
            pof_slime = "lbs/animation_one/Antidote 3.png";
            break;
        }
    }
    return (pof_slime);
}

char *end_plosion(char *pof_plosion)
{
    int static mundo = 0;
    while (1) {
        if (mundo == 0) {
            mundo = mundo + 1;
            pof_plosion = "lbs/animation_one/explo_unos.png";
            break;
        }
        if (mundo == 1) {
            mundo = mundo + 1;
            pof_plosion = "lbs/animation_one/explo_dos.png";
            break;
        }
        if (mundo == 2) {
            mundo =  0;
            pof_plosion = "lbs/animation_one/explo_tres.png";
            break;
        }
    }
    return (pof_plosion);
}