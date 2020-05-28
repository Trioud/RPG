/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** c_life.c
*/

#include "../../antoine.h"

void life_monster(statis_t *statis, sfRenderWindow *window)
{
    sfText *texte;
    sfVector2f pos = {930 , 110};
    sfFont *font;
    char *vie_boss = malloc(sizeof(char)* 10);
    font = sfFont_createFromFile("font/GoldenHillsDEMO.ttf");
    texte = sfText_create();
    sfText_setColor(texte, sfRed);
    sfText_setFont(texte, font);
    sfText_setCharacterSize(texte, 30);
    vie_boss = its(statis->boss_vie);
    sfText_setString(texte, vie_boss);
    sfText_setPosition(texte, pos);
    sfRenderWindow_drawText(window, texte, NULL);
}

void life_hero(statis_t *statis, sfRenderWindow *window)
{
    sfText *texte;
    sfVector2f pos = {930 , 900};
    sfFont *font;
    char *vie_boss = malloc(sizeof(char)* 10);
    font = sfFont_createFromFile("font/GoldenHillsDEMO.ttf");
    texte = sfText_create();
    sfText_setColor(texte, sfRed);
    sfText_setFont(texte, font);
    sfText_setCharacterSize(texte, 30);
    vie_boss = its(statis->vie);
    sfText_setString(texte, vie_boss);
    sfText_setPosition(texte, pos);
    sfRenderWindow_drawText(window, texte, NULL);
}