/*
** EPITECH PROJECT, 2019
** slime rdm
** File description:
** Slime_rdm.c
*/

#include "antoine.h"

char *result_slime(sfRenderWindow *window, char *slime)
{
    srand(time(NULL));
    while (1){
        int a = rand() %4;
        if (a == 1){
            slime = "lbs/animation_one/Slime1.png";
            break;
        }
        if (a == 2) {
            slime = "lbs/animation_one/Slime2.png";
            break;
        }
        if (a == 3) {
            slime = "lbs/animation_one/Slime3.png";
            break;
        }
    }
    return (slime);
}

void pre_roll (sfRenderWindow *window)
{
    char *pof_slime = malloc(sizeof(char) * 50);
    pof_slime = end_roll(pof_slime);
    loot_anime_w8(window, pof_slime, 700, 400);
}

void loot_anime_w8(sfRenderWindow *window, char *pof_slime, int x, int y)
{
    sfSprite *sprite;
    sprite = sfSprite_create();
    sfTexture *texture;
    texture = sfTexture_createFromFile(pof_slime, NULL);
    sfVector2f pos;
    pos.x = x;
    pos.y = y;
    sfSprite_setPosition(sprite, pos);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_drawSprite(window, sprite, NULL);
}

void start_plosion(sfRenderWindow *window)
{
    char *pof_plosion = malloc(sizeof(char) * 50);
    pof_plosion = end_plosion(pof_plosion);
    int x = 0;
    int y = 0;
    loot_anime_w8(window, pof_plosion, 200, -100);
}

char *Slime_rdm (sfRenderWindow *window)
{
    int i = 0;
    float a = 6;
    sfTime b = sfSeconds(a);
    char *slime = malloc(sizeof(char) *10);
    sfMusic *ms;
    ms = sfMusic_createFromFile("lbs/animation_one/sound_loot_box.ogg");
    sfMusic_play(ms);
    sfRenderWindow_clear(window, sfBlack);
    af_f_one(i, window);
    af_f_two(i, window);
    slime = result_slime(window, slime);
    af_f_trois(window, slime);
    sfSleep(b);
    sfRenderWindow_destroy(window);
    sfMusic_destroy(ms);
    return (slime);
}