/*
** EPITECH PROJECT, 2020
** de
** File description:
** d
*/

#include "my.h"

void more_init_intro(rpg_t *y)
{
    y->intro_txt = sfText_create();
    sfText_setFont(y->intro_txt, y->font);
    y->intro_txt2 = sfText_create();
    sfText_setFont(y->intro_txt2, y->font);
    y->intro_txt3 = sfText_create();
    sfText_setFont(y->intro_txt3, y->font);
    y->car_txt = sfText_create();
    sfText_setFont(y->car_txt, y->font);
    y->man = sfTexture_createFromFile("Assets/Texture/man.jpg", NULL);
    y->man_s = sfSprite_create();
    sfSprite_setTexture(y->man_s, y->man, sfTrue);
}

void init_intro(rpg_t *y)
{
    sfWindow_setMouseCursorVisible((sfWindow *) y->window, 0);
    y->car_s = sfSprite_create();
    y->logo_s = sfSprite_create();
    y->clock_sprite = sfClock_create();
    y->logo = sfTexture_createFromFile("Assets/Texture/logo.jpg", NULL);
    y->cursor = sfTexture_createFromFile("Assets/Texture/Cursors.png", NULL);
    y->logo_bis = sfTexture_createFromFile("Assets/Texture/logo_bis.jpg", NULL);
    y->intro = sfClock_create();
    y->clock_txt = sfClock_create();
    y->logo_sound = sfMusic_createFromFile("Assets/SA/logo.ogg");
    y->police_cars = sfMusic_createFromFile("Assets/SA/writing_sound.ogg");
    sfSprite_setTexture(y->logo_s, y->logo, sfTrue);
    sfMusic_play(y->logo_sound);
    y->font = sfFont_createFromFile("Assets/Font/Sea.ttf");
    more_init_intro(y);
}

void vect_intro(rpg_t *y)
{
    y->logo_v.x = 460;
    y->logo_v.y = 200;
    sfSprite_setPosition(y->logo_s, y->logo_v);
    y->inttxt_v.x = 460;
    y->inttxt_v.y = 200;
    sfText_setPosition(y->intro_txt, y->inttxt_v);
    y->inttxt_v.x = 730;
    y->inttxt_v.y = 400;
    sfText_setPosition(y->intro_txt2, y->inttxt_v);
    y->inttxt_v.x = 1000;
    y->inttxt_v.y = 600;
    sfText_setPosition(y->intro_txt3, y->inttxt_v);
    y->inttxt_v.x = 780;
    y->inttxt_v.y = 830;
    sfText_setPosition(y->car_txt, y->inttxt_v);
    sfText_setScale(y->car_txt, (sfVector2f) {2,2});
    y->inttxt_v.x = 750;
    y->inttxt_v.y = 200;
    sfSprite_setPosition(y->man_s, y->inttxt_v);
}

void draw_intro(rpg_t *y)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime(y->intro)) > 5) {
        sfMusic_stop(y->logo_sound);
        sfSprite_setColor(y->logo_s, sfBlack);
        if (y->start_police == 0 && sfTime_asSeconds(sfClock_getElapsedTime(y->intro)) < 56) {
            sfMusic_play(y->police_cars);
            sfMusic_setLoop(y->police_cars, sfTrue);
            y->start_police = 1;
        }
    }
    sfRenderWindow_drawSprite(y->window, y->logo_s, NULL);
    show_me_the_txt(y);
    sfRenderWindow_drawText(y->window, y->intro_txt, NULL);
    sfRenderWindow_drawText(y->window, y->intro_txt2, NULL);
    sfRenderWindow_drawText(y->window, y->intro_txt3, NULL);
}

int escape_key_int(rpg_t *y)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape) || y->event.type == sfEvtClosed) {
        sfMusic_destroy(y->police_cars);
        sfMusic_destroy(y->logo_sound);
        sfRenderWindow_close(y->window);
        return (84);
    }
}

void stop_all_musics(rpg_t *y)
{
    sfMusic_stop(y->logo_sound);
    sfMusic_stop(y->police_cars);
}

int intro(rpg_t *y)
{
    init_intro(y);
    vect_intro(y);
    while (sfRenderWindow_isOpen(y->window)) {
        clock_sprites(y);
        if (sfKeyboard_isKeyPressed(sfKeySpace) || y->txt_pointer == 3) {
            stop_all_musics(y);
            break;
        }
        while (sfRenderWindow_pollEvent(y->window, &y->event)) {
            if (escape_key_int(y) == 84)
                return (84);
            resize(y);
        }
        draw_intro(y);
        sfRenderWindow_display(y->window);
    }
}