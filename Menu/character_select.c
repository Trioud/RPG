/*
** EPITECH PROJECT, 2020
** de
** File description:
** de
*/

#include "my.h"

void initialization_cs(struct rpg_t *y)
{
    y->characterselect = sfTexture_createFromFile("Assets/Texture/Choose_class3.jpg", NULL);
    y->characterselect_s = sfSprite_create();
    y->overlay_choose = sfTexture_createFromFile("Assets/Texture/Class_select.png", NULL);
    y->archer = sfTexture_createFromFile("Assets/Texture/icon_arc.png", NULL);
    y->warrior = sfTexture_createFromFile("Assets/Texture/icon_war.png", NULL);
    y->mage = sfTexture_createFromFile("Assets/Texture/icon_mage.png", NULL);
    y->light_on = sfTexture_createFromFile("Assets/Texture/light_on.png", NULL);
    y->light_off = sfTexture_createFromFile("Assets/Texture/light_off.png", NULL);
    y->lights_s = sfSprite_create();
    y->class_he_chose = sfSprite_create();
    y->overlay_choose_s = sfSprite_create();
    y->ch_warrior = sfText_create();
    y->ch_mage = sfText_create();
    y->ch_archer = sfText_create();
    y->username = sfText_create();
    y->character_time = sfClock_create();
    y->vita_show = sfText_create();
    y->intel_show = sfText_create();
    y->agil_show = sfText_create();
    y->luck_show = sfText_create();
    y->strenght_show = sfText_create();
    y->vita_txt = sfText_create();
    y->intel_txt = sfText_create();
    y->agil_txt = sfText_create();
    y->luck_txt = sfText_create();
    y->strenght_txt = sfText_create();
    y->description = sfText_create();
    sfText_setFont(y->description, y->font);
    sfText_setFont(y->intel_txt, y->font);
    sfText_setFont(y->agil_txt, y->font);
    sfText_setFont(y->strenght_txt, y->font);
    sfText_setFont(y->luck_txt, y->font);
    sfText_setFont(y->intel_show, y->font);
    sfText_setFont(y->agil_show, y->font);
    sfText_setFont(y->luck_show, y->font);
    sfText_setFont(y->strenght_show, y->font);
    sfText_setFont(y->vita_show, y->font);
    sfText_setFont(y->vita_txt, y->font);
    sfText_setFont(y->username, y->font);
    sfText_setFont(y->ch_warrior, y->font);
    sfText_setFont(y->ch_mage, y->font);
    sfText_setFont(y->ch_archer, y->font);
    sfText_setString(y->description, "Choose a class to see\n       more details");
    sfText_setString(y->intel_show, "Intelligence");
    sfText_setString(y->agil_show, "Agility");
    sfText_setString(y->luck_show, "Luck");
    sfText_setString(y->strenght_show, "Strenght");
    sfText_setString(y->vita_show, "Vitality");
    sfText_setString(y->vita_txt, "1");
    sfText_setString(y->strenght_txt, "30");
    sfText_setString(y->luck_txt, "20");
    sfText_setString(y->agil_txt, "5");
    sfText_setString(y->intel_txt, "12");
    sfText_setString(y->ch_warrior, "Warrior");
    sfText_setString(y->ch_mage, "Mage");
    sfText_setString(y->ch_archer, "Archer");
    sfText_setString(y->username, "Enter your name");
    sfText_setScale(y->username, (sfVector2f) {2, 2});
    sfText_setString(y->start_txt, "Begin");
    y->what_hechose = 0;
}

void vector_initialization_cs(struct rpg_t *y)
{
    y->ch_class_v.y = 440;
    y->ch_class_v.x = 760;
    sfText_setPosition(y->ch_warrior, y->ch_class_v);
    y->ch_class_v.x = 1050;
    sfText_setPosition(y->ch_mage, y->ch_class_v);
    y->ch_class_v.x = 1300;
    sfText_setPosition(y->ch_archer, y->ch_class_v);
    y->ch_class_v.y = 195;
    y->ch_class_v.x = 676;
    sfSprite_setPosition(y->class_he_chose, y->ch_class_v);
    y->ch_class_v.y = 198;
    y->ch_class_v.x = 930;
    sfText_setPosition(y->username, y->ch_class_v);
    y->button_v.y = 900;
    y->button_v.x = 790;
    sfSprite_setPosition(y->button_s, y->button_v);
    y->overlay_v.y = 820;
    sfSprite_setPosition(y->overlay_s, y->overlay_v);
    y->overlay_v.y = 850;
    y->overlay_v.x = 902;
    sfSprite_setPosition(y->lights_s, y->overlay_v);
    y->overlay_v.x = 899;
    y->overlay_v.y = 912;
    sfText_setPosition(y->start_txt, y->overlay_v);
    y->overlay_v.x = 735;
    y->overlay_v.y = 558;
    sfText_setPosition(y->vita_show, y->overlay_v);
    y->overlay_v.x = 960;
    sfText_setPosition(y->vita_txt, y->overlay_v);
    y->overlay_v.x = 735;
    y->overlay_v.y = 614;
    sfText_setPosition(y->strenght_show, y->overlay_v);
    y->overlay_v.x = 960;
    sfText_setPosition(y->strenght_txt, y->overlay_v);
    y->overlay_v.y = 674;
    sfText_setPosition(y->intel_txt, y->overlay_v);
    y->overlay_v.x = 735;
    sfText_setPosition(y->intel_show, y->overlay_v);
    y->overlay_v.y = 734;
    sfText_setPosition(y->agil_show, y->overlay_v);
    y->overlay_v.x = 960;
    sfText_setPosition(y->agil_txt, y->overlay_v);
    y->overlay_v.y = 794;
    sfText_setPosition(y->luck_txt, y->overlay_v);
    y->overlay_v.x = 735;
    sfText_setPosition(y->luck_show, y->overlay_v);
    y->overlay_v.y = 558;
    y->overlay_v.x = 1065;
    sfText_setPosition(y->description, y->overlay_v);
}

void texture_set_cs(struct rpg_t *y)
{
    sfSprite_setTexture(y->characterselect_s, y->characterselect, sfTrue);
    sfSprite_setTexture(y->overlay_choose_s, y->overlay_choose, sfTrue);
    sfSprite_setTexture(y->lights_s, y->light_off, sfTrue);
}

void draw_cs(struct rpg_t *y)
{
    sfRenderWindow_drawSprite(y->window, y->characterselect_s, NULL);
    sfRenderWindow_drawText(y->window, y->username, NULL);
    sfRenderWindow_drawText(y->window, y->ch_warrior, NULL);
    sfRenderWindow_drawText(y->window, y->ch_mage, NULL);
    sfRenderWindow_drawText(y->window, y->ch_archer, NULL);
    sfRenderWindow_drawSprite(y->window, y->settings_s, NULL);
    sfRenderWindow_drawText(y->window, y->vita_show, NULL);
    sfRenderWindow_drawText(y->window, y->strenght_show, NULL);
    sfRenderWindow_drawText(y->window, y->intel_show, NULL);
    sfRenderWindow_drawText(y->window, y->agil_show, NULL);
    sfRenderWindow_drawText(y->window, y->luck_show, NULL);
    sfRenderWindow_drawText(y->window, y->description, NULL);
    if (y->what_hechose != 0) {
        sfRenderWindow_drawSprite(y->window, y->class_he_chose, NULL);
        sfRenderWindow_drawSprite(y->window, y->overlay_choose_s, NULL);
        sfRenderWindow_drawText(y->window, y->vita_txt, NULL);
        sfRenderWindow_drawText(y->window, y->strenght_txt, NULL);
        sfRenderWindow_drawText(y->window, y->intel_txt, NULL);
        sfRenderWindow_drawText(y->window, y->agil_txt, NULL);
        sfRenderWindow_drawText(y->window, y->luck_txt, NULL);
    }
    sfRenderWindow_drawSprite(y->window, y->button_s, NULL);
    sfRenderWindow_drawSprite(y->window, y->lights_s, NULL);
    if (y->overlay_go == 1)
        sfRenderWindow_drawSprite(y->window, y->overlay_s, NULL);
    sfRenderWindow_drawText(y->window, y->start_txt, NULL);
    if (y->see_options == 1)
        sfRenderWindow_drawSprite(y->window, y->options_s, NULL);
    options_specific_draw(y);
    sfRenderWindow_drawSprite(y->window, y->cursor_s, NULL);
}

void choose_your_path(struct rpg_t *y)
{
    if (y->mo.x > 633 && y->mo.x < 633 + 100
        && 417 < y->mo.y && 417 + 83 > y->mo.y)
        y->what_hechose = 1;
    if (y->mo.x > 933 && y->mo.x < 933 + 100
        && 417 < y->mo.y && 417 + 90 > y->mo.y)
        y->what_hechose = 2;
    if (y->mo.x > 1180 && y->mo.x < 1180 + 100
        && 417 < y->mo.y && 417 + 83 > y->mo.y)
        y->what_hechose = 3;
}

void class_choice(struct rpg_t *y)
{
    if (y->what_hechose == 1) {
        y->choice_v.x = 627;
        y->choice_v.y = 398;
        sfSprite_setTexture(y->class_he_chose, y->warrior, sfTrue);
    }
    if (y->what_hechose == 2) {
        y->choice_v.x = 927;
        y->choice_v.y = 398;
        sfSprite_setTexture(y->class_he_chose, y->mage, sfTrue);
    }
    if (y->what_hechose == 3) {
        y->choice_v.x = 1174;
        y->choice_v.y = 398;
        sfSprite_setTexture(y->class_he_chose, y->archer, sfTrue);
    }
    sfSprite_setPosition(y->overlay_choose_s, y->choice_v);
}

void alphabet(struct rpg_t *y)
{
    if (sfKeyboard_isKeyPressed(sfKeyBack) && y->size != 0 && sfTime_asSeconds(sfClock_getElapsedTime(y->character_time)) > 0.10) {
        y->size--;
        y->username_c[y->size] = '\0';
        sfClock_restart(y->character_time);
        return;
    }
    if (y->size < 8 && sfTime_asSeconds(sfClock_getElapsedTime(y->character_time)) > 0.10) {
        if (sfKeyboard_isKeyPressed(sfKeyA)) {
            y->username_c[y->size] = 'A';
            y->size ++;
            y->username_c[y->size] = '\0';
        }
        if (sfKeyboard_isKeyPressed(sfKeyB)) {
            y->username_c[y->size] = 'B';
            y->size ++;
            y->username_c[y->size] = '\0';
        }
        if (sfKeyboard_isKeyPressed(sfKeyC)) {
            y->username_c[y->size] = 'C';
            y->size ++;
            y->username_c[y->size] = '\0';
        }
        if (sfKeyboard_isKeyPressed(sfKeyD)) {
            y->username_c[y->size] = 'D';
            y->size ++;
            y->username_c[y->size] = '\0';
        }
        if (sfKeyboard_isKeyPressed(sfKeyE)) {
            y->username_c[y->size] = 'E';
            y->size ++;
            y->username_c[y->size] = '\0';
        }
        if (sfKeyboard_isKeyPressed(sfKeyF)) {
            y->username_c[y->size] = 'F';
            y->size ++;
            y->username_c[y->size] = '\0';
        }
        if (sfKeyboard_isKeyPressed(sfKeyG)) {
            y->username_c[y->size] = 'G';
            y->size ++;
            y->username_c[y->size] = '\0';
        }
        if (sfKeyboard_isKeyPressed(sfKeyH)) {
            y->username_c[y->size] = 'H';
            y->size ++;
            y->username_c[y->size] = '\0';
        }
        if (sfKeyboard_isKeyPressed(sfKeyI)) {
            y->username_c[y->size] = 'I';
            y->size ++;
            y->username_c[y->size] = '\0';
        }
        if (sfKeyboard_isKeyPressed(sfKeyJ)) {
            y->username_c[y->size] = 'J';
            y->size  ++;
            y->username_c[y->size] = '\0';
        }
        if (sfKeyboard_isKeyPressed(sfKeyK)) {
            y->username_c[y->size] = 'K';
            y->size ++;
            y->username_c[y->size] = '\0';
        }
        if (sfKeyboard_isKeyPressed(sfKeyL)) {
            y->username_c[y->size] = 'L';
            y->size ++;
            y->username_c[y->size] = '\0';
        }
        if (sfKeyboard_isKeyPressed(sfKeyM)) {
            y->username_c[y->size] = 'M';
            y->size ++;
            y->username_c[y->size] = '\0';
        }
        if (sfKeyboard_isKeyPressed(sfKeyN)) {
            y->username_c[y->size] = 'N';
            y->size ++;
            y->username_c[y->size] = '\0';
        }
        if (sfKeyboard_isKeyPressed(sfKeyO)) {
            y->username_c[y->size] = 'O';
            y->size ++;
            y->username_c[y->size] = '\0';
        }
        if (sfKeyboard_isKeyPressed(sfKeyP)) {
            y->username_c[y->size] = 'P';
            y->size ++;
            y->username_c[y->size] = '\0';
        }
        if (sfKeyboard_isKeyPressed(sfKeyQ)) {
            y->username_c[y->size] = 'Q';
            y->size ++;
            y->username_c[y->size] = '\0';
        }
        if (sfKeyboard_isKeyPressed(sfKeyR)) {
            y->username_c[y->size] = 'R';
            y->size ++;
            y->username_c[y->size] = '\0';
        }
        if (sfKeyboard_isKeyPressed(sfKeyS)) {
            y->username_c[y->size] = 'S';
            y->size ++;
            y->username_c[y->size] = '\0';
        }
        if (sfKeyboard_isKeyPressed(sfKeyT)) {
            y->username_c[y->size] = 'T';
            y->size ++;
            y->username_c[y->size] = '\0';
        }
        if (sfKeyboard_isKeyPressed(sfKeyU)) {
            y->username_c[y->size] = 'U';
            y->size ++;
            y->username_c[y->size] = '\0';
        }
        if (sfKeyboard_isKeyPressed(sfKeyV)) {
            y->username_c[y->size] = 'V';
            y->size ++;
            y->username_c[y->size] = '\0';
        }
        if (sfKeyboard_isKeyPressed(sfKeyW)) {
            y->username_c[y->size] = 'W';
            y->size ++;
            y->username_c[y->size] = '\0';
        }
        if (sfKeyboard_isKeyPressed(sfKeyX)) {
            y->username_c[y->size] = 'X';
            y->size ++;
            y->username_c[y->size] = '\0';
        }
        if (sfKeyboard_isKeyPressed(sfKeyY)) {
            y->username_c[y->size] = 'Y';
            y->size ++;
            y->username_c[y->size] = '\0';
        }
        if (sfKeyboard_isKeyPressed(sfKeyZ)) {
            y->username_c[y->size] = 'Z';
            y->size ++;
            y->username_c[y->size] = '\0';
        }
        sfClock_restart(y->character_time);
    }
}

void username_enter(struct rpg_t *y)
{
    static int x;
    if (x == 0) {
        y->username_c = malloc(sizeof(char) * 10);
        x++;
        y->size = 0;
        y->username_c[0] = '\0';
    }
    else
        y->size = my_strlen(y->username_c);
    while (1) {
        y->mo = sfMouse_getPositionRenderWindow(y->window);
        if (y->mo.x > 930 && y->mo.x < 930 + 400
            && 198 < y->mo.y && 198 + 79 > y->mo.y);
        else
            return;
        while (sfRenderWindow_pollEvent(y->window, &y->event)) {
            alphabet(y);
        }
        sfText_setString(y->username, y->username_c);
        sfRenderWindow_drawSprite(y->window, y->characterselect_s, NULL);
        sfRenderWindow_drawText(y->window, y->username, NULL);
        sfRenderWindow_drawText(y->window, y->ch_warrior, NULL);
        sfRenderWindow_drawText(y->window, y->ch_mage, NULL);
        sfRenderWindow_drawText(y->window, y->ch_archer, NULL);
        sfRenderWindow_drawText(y->window, y->username, NULL);
        sfRenderWindow_drawText(y->window, y->vita_show, NULL);
        sfRenderWindow_drawText(y->window, y->strenght_show, NULL);
        sfRenderWindow_drawText(y->window, y->intel_show, NULL);
        sfRenderWindow_drawText(y->window, y->agil_show, NULL);
        sfRenderWindow_drawText(y->window, y->luck_show, NULL);
        if (y->what_hechose != 0) {
            sfRenderWindow_drawSprite(y->window, y->class_he_chose, NULL);
            sfRenderWindow_drawSprite(y->window, y->overlay_choose_s, NULL);
            sfRenderWindow_drawText(y->window, y->vita_txt, NULL);
            sfRenderWindow_drawText(y->window, y->strenght_txt, NULL);
            sfRenderWindow_drawText(y->window, y->intel_txt, NULL);
            sfRenderWindow_drawText(y->window, y->agil_txt, NULL);
            sfRenderWindow_drawText(y->window, y->luck_txt, NULL);
        }
        sfRenderWindow_display(y->window);
    }
}

void update_showstats(struct rpg_t *y)
{
    if (y->what_hechose == 1) {
        sfText_setString(y->vita_txt, "30");
        sfText_setString(y->strenght_txt, "20");
        sfText_setString(y->intel_txt, "5");
        sfText_setString(y->agil_txt, "5");
        sfText_setString(y->luck_txt, "3");
        sfText_setString(y->description, "     Warrior\n\nPowerful and enduring,\nthis one will be a joy to see\n What he lacks in intelligence\nhe makes up in raw force !\nLet's see if luck is on his side...");
    }
    if (y->what_hechose == 2) {
        sfText_setString(y->vita_txt, "15");
        sfText_setString(y->strenght_txt, "5");
        sfText_setString(y->intel_txt, "20");
        sfText_setString(y->agil_txt, "10");
        sfText_setString(y->luck_txt, "8");
         sfText_setString(y->description, "     Mage\n\nOh my, oh my\nIntelligence is the key\n to victory for this one\nNot the most\nthreatening build, may his\nbrain save his life");
    }
    if (y->what_hechose == 3) {
        sfText_setString(y->vita_txt, "25");
        sfText_setString(y->strenght_txt, "10");
        sfText_setString(y->intel_txt, "10");
        sfText_setString(y->agil_txt, "20");
        sfText_setString(y->luck_txt, "5");
        sfText_setString(y->description, "     Archer\n\nThe well-rounded adventurer !\nA jack of all trades !\nIs expertise the only way to win ?\nOr will his trusty bow\n save his life ?\nI will enjoy your fate...");
    }
}

void base_stats(FILE *fd, struct rpg_t *y)
{
    if (y->what_hechose == 1)
        fwrite("1\nbaton:twe:1,stat:10\ncuir:tar:1,stats:10\nSlime1\nSlime2\nSlime3\nnone\nM:0\nf:20\ni:5\na:5\nv:30\nc:3\nfin", 1, sizeof("1\nbaton:twe:1,stat:10\ncuir:tar:1,stats:10\nSlime1\nSlime2\nSlime3\nnone\nM:0\nf:20\ni:5\na:5\nv:30\nc:3\nfin"), fd);
    else if (y->what_hechose == 2)
        fwrite("1\nbaton:twe:1,stat:10\ncuir:tar:1,stats:10\nSlime1\nSlime2\nSlime3\nnone\nM:0\nf:5\ni:20\na:10\nv:15\nc:8\nfin", 1, sizeof("1\nbaton:twe:1,stat:10\ncuir:tar:1,stats:10\nSlime1\nSlime2\nSlime3\nnone\nM:0\nf:5\ni:20\na:10\nv:15\nc:8\nfin"), fd);
    else
        fwrite("1\nbaton:twe:1,stat:10\ncuir:tar:1,stats:10\nSlime1\nSlime2\nSlime3\nnone\nM:0\nf:10\ni:10\na:20\nv:25\nc:5\nfin", 1, sizeof("1\nbaton:twe:1,stat:10\ncuir:tar:1,stats:10\nSlime1\nSlime2\nSlime3\nnone\nM:0\nf:10\ni:10\na:20\nv:25\nc:5\nfin"), fd);
}

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i = i + 1;
    }
    return (dest);
}

void write_savethree(struct rpg_t *y)
{
    FILE *fd;
    char *str = malloc(sizeof(char) * 10);

    close(y->savethree);
    fd = fopen(".savefiles/savethree", "w");
    str = my_strcpy(y->username_c, str);
    fwrite(str, 1, (sizeof(char) * my_strlen(str)), fd);
    if (y->what_hechose == 1)
        fwrite("\nwarrior\n", 1, sizeof("warrior\n"), fd);
    else if (y->what_hechose == 2)
        fwrite("\nmage\n", 1, sizeof("mage\n"), fd);
    else
        fwrite("\narcher\n", 1, sizeof("archer\n"), fd);
    base_stats(fd, y);
    fclose(fd);
}

void write_savetwo(struct rpg_t *y)
{
    FILE *fd;
    char *str = malloc(sizeof(char) * 10);
    close(y->savetwo);
    fd = fopen(".savefiles/savetwo", "w");
    str = my_strcpy(y->username_c, str);
    fwrite(str, 1, (sizeof(char) * my_strlen(str)), fd);
    if (y->what_hechose == 1)
        fwrite("\nwarrior\n", 1, sizeof("warrior\n"), fd);
    else if (y->what_hechose == 2)
        fwrite("\nmage\n", 1, sizeof("mage\n"), fd);
    else
        fwrite("\narcher\n", 1, sizeof("archer\n"), fd);
    base_stats(fd, y);
    fclose(fd);
}

void write_saveone(struct rpg_t *y)
{
    FILE *fd;
    char *str = malloc(sizeof(char) * 10);
    close(y->saveone);
    fd = fopen(".savefiles/saveone", "w");
    str = my_strcpy(y->username_c, str);
    fwrite(str, 1, (sizeof(char) * my_strlen(str)), fd);
    if (y->what_hechose == 1)
        fwrite("\nwarrior\n", 1, sizeof("warrior\n"), fd);
    else if (y->what_hechose == 2)
        fwrite("\nmage\n", 1, sizeof("mage\n"), fd);
    else
        fwrite("\narcher\n", 1, sizeof("archer\n"), fd);
    base_stats(fd, y);
    fclose(fd);
}

void write_that_down(struct rpg_t *y)
{
    if (y->save_nb == 1)
        write_saveone(y);
    if (y->save_nb == 2)
        write_savetwo(y);
    if (y->save_nb == 3)
        write_savethree(y);
}

void interactions_cs(struct rpg_t *y)
{
    if (y->see_options == 1) {
        options_pressed(y);
        return;
    }
    if (y->mo.x > 792 && y->mo.x < 792 + 361
        && 911 < y->mo.y && 911 + 55) {
        y->overlay_go = 1;
        sfSprite_setTexture(y->lights_s, y->light_on, sfTrue);
    }
    else {
        y->overlay_go = 0;
        sfSprite_setTexture(y->lights_s, y->light_off, sfTrue);
    }
    if (y->event.type == sfEvtMouseButtonPressed) {
        if (y->mo.x > 1758 && y->mo.x < 1758 + 100
            && 914 < y->mo.y && 914 + 80 > y->mo.y)
            y->see_options = 1;
        choose_your_path(y);
        update_showstats(y);
        if (y->mo.x > 930 && y->mo.x < 930 + 400
            && 198 < y->mo.y && 198 + 79 > y->mo.y)
            username_enter(y);
        if (y->mo.x > 792 && y->mo.x < 792 + 361
        && 911 < y->mo.y && 911 + 55 && y->what_hechose != 0 && y->username_c[0] != '\0') {
            write_that_down(y);
            start_hub(y->window, y->save_nb);
        }
    }
}

void character_select(struct rpg_t *y)
{
    initialization_cs(y);
    vector_initialization_cs(y);
    texture_set_cs(y);
    while (sfRenderWindow_isOpen(y->window)) {
        mouse_cursor(y);
        while (sfRenderWindow_pollEvent(y->window, &y->event)) {
            interactions_cs(y);
            escape_key_m(y);
            options_overlay(y);
            resize(y);
        }
        class_choice(y);
        draw_cs(y);
        sfRenderWindow_display(y->window);
    }
}