/*
** EPITECH PROJECT, 2020
** de
** File description:
** de
*/

#include "my.h"

void animated_strings(char *str, sfText *intro_txt, sfClock *clock_txt, rpg_t *y)
{
    int i = 0;
    char *boy = malloc(sizeof(char) * my_strlen(str));

    while (i <= y->anim_i) {
        boy[i] = str[i];
        i++;
    }
    boy[i] = '\0';
    if (sfTime_asSeconds(sfClock_getElapsedTime(clock_txt)) > 0.1) {
        sfClock_restart(clock_txt);
        sfText_setString(intro_txt, boy);
        if (str[y->anim_i] != '\0')
            y->anim_i += 1;
    }
}

void car_txt_here(rpg_t *y)
{
    if (y->txt_pointer == 3)
        animated_strings("Am I inside a car ?", y->car_txt, y->clock_txt, y);
    if (sfTime_asSeconds(sfClock_getElapsedTime(y->intro)) >= 26 && y->txt_pointer
    == 3) {
        y->anim_i = 0;
        y->txt_pointer = 4;
    }
    if (y->txt_pointer == 4 && sfTime_asSeconds(sfClock_getElapsedTime(y->intro)) >= 28)
        animated_strings("Where am I even going ?", y->car_txt, y->clock_txt, y);
    if (sfTime_asSeconds(sfClock_getElapsedTime(y->intro)) >= 35 && y->txt_pointer
    == 4) {
        y->anim_i = 0;
        y->txt_pointer = 5;
    }
    if (y->txt_pointer == 5 &&
    sfTime_asSeconds(sfClock_getElapsedTime(y->intro)) >= 38) {
        animated_strings("I'm not hearing the sirens anymore\nThis is the end..", y->car_txt, y->clock_txt, y);
        sfMusic_stop(y->police_cars);
    }
    more_text(y);
}

void car_section(rpg_t *y)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime(y->intro)) >= 22) {
        if (y->start_police == 1) {
            y->start_police = 2;
        }
        car_txt_here(y);
        sfRenderWindow_drawSprite(y->window, y->car_s, NULL);
        if (y->stop == 1)
            sfRenderWindow_drawSprite(y->window, y->man_s, NULL);
        sfRenderWindow_drawText(y->window, y->car_txt, NULL);
    }
}

void show_me_the_txt(rpg_t *y)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime(y->intro)) >= 7 &&
    sfTime_asSeconds(sfClock_getElapsedTime(y->intro)) <= 60 &&
    y->txt_pointer == 0)
        animated_strings("Panem et circenses.\nEntertainment falling in the hand of the wrong persons.\nManipulation, corruption are surrounding thisdamned place.\nYou will sadly become their main attraction.\nBut pressforward, play by their cruel rules, \nuse the weapons and armors of those who failed before you, build a powerful army of slimes, \nand may Godgive you the force you need to triumph in the midst of their chaos.\n\nGood luck adventurer, and may luck be on your side.",
        y->intro_txt, y->clock_txt, y);
    if (sfTime_asSeconds(sfClock_getElapsedTime(y->intro)) >= 61 &&
    y->txt_pointer == 0) {
        y->anim_i = 0;
        y->txt_pointer = 3;
    }
}