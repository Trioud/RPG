/*
** EPITECH PROJECT, 2020
** de
** File description:
** d
*/

#include "my.h"

void dialogue_init(struct items_here *y)
{
    y->dialogues = sfText_create();
    sfText_setFont(y->dialogues, y->fontos);
    y->txt_v.y = 905;
    y->txt_v.x = 1137;
    sfText_setPosition(y->dialogues, y->txt_v);
    if (y->gold_int > 0)
        sfText_setString(y->dialogues, "Still alive ? Well take\nwhat you want if you\nhave the money.");
    if (y->gold_int == 0)
        sfText_setString(y->dialogues, "Welcome new face.\nI can't do anything for\nyou now.");
    if (y->gold_int > 100)
        sfText_setString(y->dialogues, "You have blood on \nyour hands don't you ?");
    if (y->gold_int > 1000)
        sfText_setString(y->dialogues, "Are you a monster ?\nHow many did you killed ?\nDo you enjoy that ?");
}

void discussion(struct items_here *y)
{
    if (y->gold_int > 0)
        sfText_setString(y->dialogues, "So you made your\n first steps in the\ndungeons ?");
    if (y->gold_int == 0)
        sfText_setString(y->dialogues, "I don't talk with\n    nobodies");
    if (y->gold_int > 100)
        sfText_setString(y->dialogues, "I've heard some rumors\nabout notes in the dungeons\nFind them.");
    if (y->gold_int > 1000)
        sfText_setString(y->dialogues, "You're richer than Croesus\n but nothing alike.\nYou killed too much.");
}

void check_yo_money(struct items_here *y)
{
    if (y->mo.x > 1831 && y->mo.x < 1831 + 49
        && 39 < y->mo.y && 39 + 50 > y->mo.y) {
        sfText_setString(y->dialogues, "\n You're leaving already ?\n");
    }
    else
        y->dialogues_int = 2;
}