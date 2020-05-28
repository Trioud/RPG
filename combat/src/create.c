/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** create.c
*/

#include "../../antoine.h"

void create_boss(statis_t *statis, char *w_donjon)
{
    int choose = what_a_boss(w_donjon);
    if (choose == 1)
        boss_sable(statis);
    if (choose == 2)
        boss_jardin(statis);
    if (choose == 3)
        boss_mine(statis);
}

void create_slime(statis_t *statis)
{
    create_slime_one(statis);
    create_slime_two(statis);
    create_slime_three(statis);
}

void create_stat(statis_t *statis, char *w_donjon)
{
    char *buffer = malloc(sizeof(char) * 200);
    buffer = where_is_txt(buffer);
    statis->name = find(buffer, 0);
    statis->class = find(buffer, 1);
    statis->slime_one = find(buffer, 5);
    statis->slime_two = find(buffer, 6);
    statis->slime_three = find(buffer, 7);
    statis->force = find_stat(buffer, 'f', ':');
    statis->intel = find_stat(buffer, 'i', ':');
    statis->agi = find_stat(buffer, 'a', ':');
    statis->vie = find_stat(buffer, 'v', ':');
    statis->chance = find_stat(buffer, 'c', ':');
    statis->type_arme = find_stat(buffer, 'e', ':');
    statis->type_armor = find_stat(buffer, 'r', ':');
    statis->stat_arme = find_stat(buffer, 't', ':');
    statis->stat_armor = find_stat(buffer, 's', ':');
    create_boss(statis, w_donjon);
    create_slime(statis);
}

void create_back(element_t *elem)
{
    elem->sprite_back = sfSprite_create();
    elem->texture_back = sfTexture_createFromFile("combat/image/eeenn.png",
        NULL);
    elem->pos_back.x = 0;
    elem->pos_back.y = 0;
    sfSprite_setTexture(elem->sprite_back, elem->texture_back, sfTrue);
    sfSprite_setPosition(elem->sprite_back, elem->pos_back);
}

void create_element(element_t *elem, statis_t *statis, char *w_donjon)
{
    create_back(elem);
    create_stat(statis, w_donjon);
}