/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** main.c
*/

#include "../antoine.h"

sfRenderWindow *create_winwinwiwn(void)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {1900, 1100, 32};
    window = sfRenderWindow_create(video_mode, "quest menu",
        sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(window, 30);
    return (window);
}

void qstu_menu(sfRenderWindow *window)
{
    sfSprite *sprite;
    sprite = sfSprite_create();
    sfTexture *texture;
    texture = sfTexture_createFromFile("quest/mnqst.jpg", NULL);
    sfVector2f pos;
    pos.x = 200;
    pos.y = 0;
    sfSprite_setPosition(sprite, pos);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_drawSprite(window, sprite, NULL);
}

void tx_qstu_menu(sfRenderWindow *window, int a)
{
    sfText *texte;
    sfVector2f pos = {1200, 680};
    sfFont *font;
    char *vie_boss = malloc(sizeof(char)* 10);
    font = sfFont_createFromFile("font/GoldenHillsDEMO.ttf");
    texte = sfText_create();
    sfText_setColor(texte, sfWhite);
    sfText_setFont(texte, font);
    sfText_setCharacterSize(texte, 50);
    vie_boss = its(a);
    sfText_setString(texte, vie_boss);
    sfText_setPosition(texte, pos);
    sfRenderWindow_drawText(window, texte, NULL);
}

void tx_qstu_menu_two(sfRenderWindow *window, int b)
{
    sfText *texte;
    sfVector2f pos = {1200 , 460};
    sfFont *font;
    char *vie_boss = malloc(sizeof(char)* 10);
    font = sfFont_createFromFile("font/GoldenHillsDEMO.ttf");
    texte = sfText_create();
    sfText_setColor(texte, sfWhite);
    sfText_setFont(texte, font);
    sfText_setCharacterSize(texte, 50);
    vie_boss = its(b);
    sfText_setString(texte, vie_boss);
    sfText_setPosition(texte, pos);
    sfRenderWindow_drawText(window, texte, NULL);
}

void menu_quest(int feuille, int dj)
{
    int a = feuille;
    int b = dj;
    sfRenderWindow *window = create_winwinwiwn();
    while (sfRenderWindow_isOpen(window)) {
        sfVector2i pos_mouse = sfMouse_getPositionRenderWindow(window);
        sfVector2f pos_mouse2;
        pos_mouse2.x = (float)pos_mouse.x;
        pos_mouse2.y = (float)pos_mouse.y;
        sfRenderWindow_clear(window, sfBlack);
        qstu_menu(window);
        tx_qstu_menu(window, a);
        tx_qstu_menu_two(window, b);
        if (pos_mouse2.x >= 1300 && pos_mouse2.x <= 1400 && pos_mouse2.y >= 200
            && pos_mouse2.y <= 300 && sfMouse_isButtonPressed(sfMouseLeft)) {
            break;
        }
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
}