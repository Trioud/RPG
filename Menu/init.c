/*
** EPITECH PROJECT, 2020
** de
** File description:
** d
*/

#include "my.h"

void intialization_music(struct rpg_t *y)
{
    y->bowser_menu = sfMusic_createFromFile("Assets/Music/menu_one.ogg");
    sfMusic_play(y->bowser_menu);
}

char *copy_until_backslash(char *str)
{
    int i;
    char *tmp = malloc(sizeof(char) * my_strlen(str));
    for (i = 0; str[i] != '\n' && str[i] != '\0'; i++) {
        tmp[i] = str[i];
    }
    tmp[i] = '\0';
    return (tmp);
}

void check_the_saves(struct rpg_t *y)
{
    y->saveone = open(".savefiles/saveone", O_RDWR);
    read(y->saveone, y->filenone, 100);
    if (y->filenone[0] == '?') {
        y->new_one = 1;
        sfText_setString(y->save_one, "Click here to begin...");
        sfSprite_setTexture(y->letter_s, y->letter_t, sfTrue);
    }
    else {
        sfText_setString(y->save_one, copy_until_backslash(y->filenone));
        sfSprite_setTexture(y->letter_s, y->open_letter, sfTrue);
    }
    y->savetwo = open(".savefiles/savetwo", O_RDWR);
    read(y->savetwo, y->filentwo, 100);
    if (y->filentwo[0] == '?') {
        y->new_two = 1;
        sfText_setString(y->save_two, "Click here to begin...");
        sfSprite_setTexture(y->lettertwo_s, y->letter_t, sfTrue);
    }
    else {
        sfText_setString(y->save_two, copy_until_backslash(y->filentwo));
        sfSprite_setTexture(y->lettertwo_s, y->open_letter, sfTrue);
    }
    y->savethree = open(".savefiles/savethree", O_RDWR);
    read(y->savethree, y->filenthree, 100);
    if (y->filenthree[0] == '?') {
        y->new_three = 1;
        sfText_setString(y->save_three, "Click here to begin...");
        sfSprite_setTexture(y->letterthree_s, y->letter_t, sfTrue);
    }
    else {
        sfText_setString(y->save_three, copy_until_backslash(y->filenthree));
        sfSprite_setTexture(y->letterthree_s, y->open_letter, sfTrue);
    }
}

void initialization_m(struct rpg_t *y)
{
    static int x;

    if (x == 0) {
        y->filenone = malloc(sizeof(char) * 4096);
        y->filentwo = malloc(sizeof(char) * 4096);
        y->filenthree = malloc(sizeof(char) * 4096);
        x++;
    }
    if (y->music_time == 0)
        intialization_music(y);
    y->go_down = 0;
    y->background_s = sfSprite_create();
    y->cursor_s = sfSprite_create();
    y->background = sfTexture_createFromFile("Assets/Texture/menu2.jpg", NULL);
    y->button = sfTexture_createFromFile("Assets/Texture/boy.png", NULL);
    y->button_hover = sfTexture_createFromFile("Assets/Texture/button_hover.png", NULL);
    y->settings = sfTexture_createFromFile("Assets/Texture/gears.png", NULL);
    y->eyes_t = sfTexture_createFromFile("Assets/Texture/eyes.jpg", NULL);
    y->overlay_t = sfTexture_createFromFile("Assets/Texture/selected_4.png", NULL);
    y->letter_t = sfTexture_createFromFile("Assets/Texture/letter.png", NULL);
    y->open_letter = sfTexture_createFromFile("Assets/Texture/open_letter.png", NULL);
    y->bigoverlay_t = sfTexture_createFromFile("Assets/Texture/overlaysave.png", NULL);
    y->options_t = sfTexture_createFromFile("Assets/Texture/options.png", NULL);
    y->goback = sfTexture_createFromFile("Assets/Options/goback.png", NULL);
    y->leave_ops = sfTexture_createFromFile("Assets/Texture/leave.png", NULL);
    y->menulay = sfTexture_createFromFile("Assets/Texture/menulay.png", NULL);
    y->leftarr = sfTexture_createFromFile("Assets/Options/leftarr.png", NULL);
    y->leftarr_stop = sfTexture_createFromFile("Assets/Options/leftarr_stop.png", NULL);
    y->rightarr_stop = sfTexture_createFromFile("Assets/Options/rightarr_stop.png", NULL);
    y->rightarr = sfTexture_createFromFile("Assets/Options/rightarr.png", NULL);
    y->checkbox = sfTexture_createFromFile("Assets/Options/checkbox.png", NULL);
    y->checkbox_fill = sfTexture_createFromFile("Assets/Options/checkmark.png", NULL);
    y->main_soundsn = sfSprite_create();
    y->mainsound_sp = sfSprite_create();
    y->sfx_sp = sfSprite_create();
    y->sfx_sn = sfSprite_create();
    y->music_sn = sfSprite_create();
    y->music_sp = sfSprite_create();
    y->menulay_s = sfSprite_create();
    y->leave_ops_s = sfSprite_create();
    y->options_s = sfSprite_create();
    y->overlay_s = sfSprite_create();
    y->muted_box = sfSprite_create();
    y->fullscreen_box = sfSprite_create();
    y->eyes_s = sfSprite_create();
    y->settings_s = sfSprite_create();
    y->button_s = sfSprite_create();
    y->letter_s = sfSprite_create();
    y->lettertwo_s = sfSprite_create();
    y->letterthree_s = sfSprite_create();
    y->bigoverlay_s = sfSprite_create();
    y->res_sn = sfSprite_create();
    y->res_sp = sfSprite_create();
    sfSprite_setTexture(y->res_sn, y->rightarr, sfTrue);
    sfSprite_setTexture(y->res_sp, y->leftarr, sfTrue);
    sfSprite_setTexture(y->fullscreen_box, y->checkbox, sfTrue);
    sfSprite_setTexture(y->muted_box, y->checkbox, sfTrue);
    sfSprite_setTexture(y->music_sn, y->rightarr, sfTrue);
    sfSprite_setTexture(y->music_sp, y->leftarr, sfTrue);
    sfSprite_setTexture(y->sfx_sn, y->rightarr, sfTrue);
    sfSprite_setTexture(y->sfx_sp, y->leftarr, sfTrue);
    sfSprite_setTexture(y->sfx_sn, y->rightarr, sfTrue);
    sfSprite_setTexture(y->sfx_sp, y->leftarr, sfTrue);
    sfSprite_setTexture(y->menulay_s, y->menulay, sfTrue);
    sfSprite_setTexture(y->main_soundsn, y->leftarr, sfTrue);
    sfSprite_setTexture(y->mainsound_sp, y->rightarr, sfTrue);
    sfSprite_setTexture(y->leave_ops_s, y->leave_ops, sfTrue);
    sfSprite_setTexture(y->options_s, y->options_t, sfTrue);
    sfSprite_setTexture(y->bigoverlay_s, y->bigoverlay_t, sfTrue);
    sfSprite_setTexture(y->eyes_s, y->eyes_t, sfTrue);
    sfSprite_setTexture(y->button_s, y->button, sfTrue);
    sfSprite_setTexture(y->settings_s, y->settings, sfTrue);
    sfSprite_setTexture(y->overlay_s, y->overlay_t, sfTrue);
    y->master_volume = sfText_create();
    y->sfx_volume = sfText_create();
    y->music_volume = sfText_create();
    y->start_txt = sfText_create();
    y->muted_t = sfText_create();
    y->fullscreen_t = sfText_create();
    y->resolution_t = sfText_create();
    y->master_tv = sfText_create();
    y->sfx_tv = sfText_create();
    y->resolution_tv = sfText_create();
    y->music_tv = sfText_create();
    sfText_setString(y->master_tv, ito(y->master_value));
    sfText_setString(y->sfx_tv, ito(y->sfx_value));
    sfText_setString(y->resolution_tv, ito(y->resolution_value));
    sfText_setString(y->music_tv, ito(y->music_value));
    sfText_setString(y->resolution_t, "Resolution");
    sfText_setString(y->fullscreen_t, "Fullscreen?");
    sfText_setString(y->muted_t, "Muted");
    sfText_setString(y->master_volume, "Master Volume");
    sfText_setString(y->sfx_volume, "SFX Volume");
    sfText_setString(y->music_volume, "Music Volume");
    sfText_setFont(y->resolution_tv, y->font);
    sfText_setFont(y->sfx_tv, y->font);
    sfText_setFont(y->master_tv, y->font);
    sfText_setFont(y->music_tv, y->font);
    sfText_setFont(y->resolution_t, y->font);
    sfText_setFont(y->fullscreen_t, y->font);
    sfText_setFont(y->muted_t, y->font);
    sfText_setFont(y->sfx_volume, y->font);
    sfText_setFont(y->music_volume, y->font);
    sfText_setFont(y->master_volume, y->font);
    sfText_setFont(y->start_txt, y->font);
    sfText_setString(y->start_txt, "Campaign");
    sfText_setScale(y->start_txt, (sfVector2f) {2, 2});
    y->save_one = sfText_create();
    sfText_setFont(y->save_one, y->font);
    sfText_setScale(y->save_one, (sfVector2f) {2, 2});
    y->save_two = sfText_create();
    sfText_setFont(y->save_two, y->font);
    sfText_setScale(y->save_two, (sfVector2f) {2, 2});
    y->save_three = sfText_create();
    sfText_setFont(y->save_three, y->font);
    sfText_setScale(y->save_three, (sfVector2f) {2, 2});
    check_the_saves(y);
    y->optionsone = sfText_create();
    sfText_setFont(y->optionsone, y->font);
    sfText_setString(y->optionsone, "Return to game");
    y->optionstwo = sfText_create();
    sfText_setFont(y->optionstwo, y->font);
    sfText_setString(y->optionstwo, "Options");
    y->optionsthree = sfText_create();
    sfText_setFont(y->optionsthree, y->font);
    sfText_setString(y->optionsthree, "How to play");
    y->optionsfour = sfText_create();
    sfText_setFont(y->optionsfour, y->font);
    sfText_setString(y->optionsfour, "Exit to Desktop");
    deep_options_set(y);
}

void vector_initialization_m(struct rpg_t *y)
{
    y->map_v.y = 0;
    y->map_v.x = 0;
    y->button_v.y = 800;
    y->button_v.x = 790;
    sfSprite_setPosition(y->button_s, y->button_v);
    y->button_v.x = 1750;
    y->button_v.y = 900;
    sfSprite_setPosition(y->settings_s, y->button_v);
    y->button_v.y = 800;
    y->button_v.x = 790;
    y->text_v.y = 810;
    y->text_v.x = 845;
    y->txt_saveone.y = 1390;
    y->txt_saveone.x = 600;
    y->txt_savetwo.y = 1620;
    y->txt_savetwo.x = 600;
    y->txt_savethree.y = 1825;
    y->txt_savethree.x = 600;
    y->eyes_v.x = 850;
    y->eyes_v.y = 250;
    y->overlay_v.y = 720;
    y->overlay_v.x = 815;
    y->letter_v.y = 1350;
    y->letter_v.x = 320;
    y->lettertwo_v.x = 320;
    y->lettertwo_v.y = 1570;
    y->letterthree_v.x = 320;
    y->letterthree_v.y = 1785;
    y->options_v.x = 450;
    y->options_v.y = 100;
    y->leave_v.x = 1308;
    y->leave_v.y = 207;
    sfSprite_setPosition(y->leave_ops_s, y->leave_v);
    sfSprite_setPosition(y->background_s, y->map_v);
}

void texture_set_m(struct rpg_t *y)
{
    sfSprite_setTexture(y->background_s, y->background, sfTrue);
    sfSprite_setTexture(y->cursor_s, y->cursor, sfTrue);
    sfSprite_setPosition(y->logo_s, y->logo_v);
    sfSprite_setTexture(y->logo_s, y->logo, sfTrue);
    y->cursor_base = (sfIntRect) {2, 3, 63, 61};
}

void draw_m(struct rpg_t *y)
{
    sfSprite_setPosition(y->background_s, y->map_v);
    sfSprite_setPosition(y->button_s, y->button_v);
    sfText_setPosition(y->start_txt, y->text_v);
    sfText_setPosition(y->save_one, y->txt_saveone);
    sfText_setPosition(y->save_two, y->txt_savetwo);
    sfText_setPosition(y->save_three, y->txt_savethree);
    sfSprite_setPosition(y->overlay_s, y->overlay_v);
    sfSprite_setPosition(y->eyes_s, y->eyes_v);
    sfSprite_setPosition(y->bigoverlay_s, y->bigoverlay_v);
    sfSprite_setTextureRect(y->cursor_s, y->cursor_base);
    sfSprite_setPosition(y->letter_s, y->letter_v);
    sfSprite_setPosition(y->lettertwo_s, y->lettertwo_v);
    sfSprite_setPosition(y->letterthree_s, y->letterthree_v);
    sfSprite_setPosition(y->options_s, y->options_v);
    sfSprite_setPosition(y->menulay_s, y->menulay_v);
    sfRenderWindow_drawSprite(y->window, y->background_s, NULL);
    if (y->map_v.y == -960 && y->go_spook == 1)
        sfRenderWindow_drawSprite(y->window, y->eyes_s, NULL);
    sfRenderWindow_drawSprite(y->window, y->button_s, NULL);
    sfRenderWindow_drawSprite(y->window, y->settings_s, NULL);
    if (y->map_v.y == -960 && y->overlay_int != 0)
        sfRenderWindow_drawSprite(y->window, y->bigoverlay_s, NULL);
    sfRenderWindow_drawSprite(y->window, y->letter_s, NULL);
    sfRenderWindow_drawSprite(y->window, y->lettertwo_s, NULL);
    sfRenderWindow_drawSprite(y->window, y->letterthree_s, NULL);
    if (y->overlay == 1)
        sfRenderWindow_drawSprite(y->window, y->overlay_s, NULL);
    sfRenderWindow_drawText(y->window, y->start_txt, NULL);
    sfRenderWindow_drawText(y->window, y->save_one, NULL);
    sfRenderWindow_drawText(y->window, y->save_two, NULL);
    sfRenderWindow_drawText(y->window, y->save_three, NULL);
    options_specific_draw(y);
    sfRenderWindow_drawSprite(y->window, y->cursor_s, NULL);
}