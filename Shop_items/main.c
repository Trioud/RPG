/*
** EPITECH PROJECT, 2020
** de
** File description:
** de
*/

#include "my.h"

void create_window_rpg(struct items_here *y)
{
    y->video_mode.width = 1920;
    y->video_mode.height = 1080;
    y->video_mode.bitsPerPixel = 32;
    y->window = sfRenderWindow_create(y->video_mode, "RPG",
    sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(y->window, 60);
    marchand(y);
}

void money(struct items_here *y, char *buffer)
{
    int go_one = 0;
    char *str = malloc(sizeof(char) * 10);
    int count = 0;
    int f = 0;

    for (int p = 0; buffer[p] != '\0'; p++) {
        if (buffer[p] == 'M' && buffer[p+1] == ':') {
            go_one++;
            p = p + 2;
        }
        if (go_one != 0 && buffer[p] != '\n') {
            count++;
            str[f] = buffer[p];
            f++;
        }
        if (buffer[p] == '\n')
            go_one = 0;
    }
    str[f] = '\0';
    if (count == 1) {
        y->gold_int = str[0] - 48;
    }
    else
        y->gold_int = my_getnbr(str);
    y->stock_int = y->gold_int;
}

void update_money(struct items_here *y, char *filepath)
{
    int fd = 0;
    int go_one = 0;
    if (y->stock_int == y->gold_int)
        return;
}

void shop(char *filepath)
{
    int fd = 0;
    struct items_here *y = malloc(sizeof(items_here));
    char *buffer = malloc(sizeof(char) * 4096);
    y->savefile = malloc(sizeof(char) * my_strlenght(filepath));
    y->savefile = filepath;
    y->fontos = sfFont_createFromFile("Assets/Font/Sea.ttf");
    fd = open(filepath, O_RDWR);
    read(fd, buffer, 4096);
    money(y, buffer);
    create_window_rpg(y);
    update_money(y, filepath);
}