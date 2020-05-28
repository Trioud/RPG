/*
** EPITECH PROJECT, 2020
** de
** File description:
** de
*/
#include <sys/stat.h>
#include <sys/types.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

typedef struct items_here{
    sfRenderWindow *window;
    sfVideoMode video_mode;
    sfVector2i mo;
    sfEvent event;
    sfSprite *background;
    sfTexture *back;
    sfVector2f vector;
    sfVector2f cursor_v;
    sfSprite *cursor_s;
    sfTexture *cursor;
    sfIntRect rect;
    sfText *gold;
    sfFont *font;
    sfVector2f txt_v;
    int gold_int;
    sfText *dialogues;
    int dialogues_int;
    int i;
    char *tmp;
    int p;
    char *savefile;
    int stock_int;
    sfFont *fontos;
}items_here;

int my_getnbr(char const *str);
int my_strlenght(char *str);
char *my_strcat(char *str1, char *str2);
int first_rows(struct items_here *y);
int second_rows(struct items_here *y);
int third_rows(struct items_here *y);
int fourth_rows(struct items_here *y);
int fifth_rows(struct items_here *y);
int first_shelf(struct items_here *y);
int second_shelf(struct items_here *y);
int third_shelf(struct items_here *y);
int fourth_shelf(struct items_here *y);
int fifth_shelf(struct items_here *y);
void he_bought(int id, struct items_here *y);
void marchand(struct items_here *y);
void dialogue_init(struct items_here *y);
void check_yo_money(struct items_here *y);
void discussion(struct items_here *y);
char *ito(int i);