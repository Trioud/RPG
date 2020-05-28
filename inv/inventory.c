/*
** EPITECH PROJECT, 2020
** inventory
** File description:
** where you have item
*/

#include "../my.h"

int main_inventory(int s_o_i, char *path)
{
    int fd = open(path, O_RDONLY);
    if (fd < 0)
        return 84;
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *window = sfRenderWindow_create(mode, "Inventory",
    sfDefaultStyle, NULL);
    sfTexture *n = sfTexture_createFromFile(
        "inv/End.jpg", NULL);
    sfSprite *nn = sfSprite_create();
    sfVector2f nn_pos = (sfVector2f) {0, 0};
    sfSprite_setTexture(nn, n, sfTrue);
    sfSprite_setPosition(nn, nn_pos);
    while (sfRenderWindow_isOpen(window)) {
        if (sfKeyboard_isKeyPressed(sfKeyP))
            sfRenderWindow_close(window);
        if (sfKeyboard_isKeyPressed(sfKeyI))
            inventory1(1, window, fd, path);
        else if (sfKeyboard_isKeyPressed(sfKeyU))
            inventory1(2, window, fd, path);
        display_default(window, nn);
    }
}

int inventory1(int s_o_i, sfRenderWindow *window, int fd, char *path)
{
    struct inv_t *bag = malloc(sizeof(inv_t));
    define_spr_inv1(window, bag);
    char buffer[4096];
    read(fd, buffer, 4096);
    char **file = my_str_to_word_array(buffer, '\n');
    if (s_o_i == 1)
        open_inv(window, file, bag);
    else if (s_o_i == 2)
        open_stuff(window, file, bag, path);
}

int define_spr_inv1(sfRenderWindow *window, inv_t *bag)
{
    bag->inventory = sfTexture_createFromFile(
        "inv/panel_inventory_full_rpg.png", NULL);
    bag->inv = sfSprite_create();
    bag->stuffed = sfTexture_createFromFile(
        "inv/panel_stuff_rpg.png", NULL);
    bag->stuff = sfSprite_create();
    bag->inv_pos = (sfVector2f) {350, 200};
    bag->stuff_pos = (sfVector2f) {420, 200};
    sfSprite_setTexture(bag->inv, bag->inventory, sfTrue);
    sfSprite_setPosition(bag->inv, bag->inv_pos);
    sfSprite_setTexture(bag->stuff, bag->stuffed, sfTrue);
    sfSprite_setPosition(bag->stuff, bag->stuff_pos);
    define_spr_items(window, bag);
}

int open_inv(sfRenderWindow *window, char **file, inv_t *bag)
{
    int t = 0;
    char *temp = malloc(sizeof(char)*my_strlen(file[8]));
    for(int h = 0; file[8][h] != '\0'; h = h + 1) {
        if (file[8][h] == '|' || (file[8][h] >= '0' && file[8][h] <= '9')) {
            temp[t] = file[8][h];
            t++;
        }
    }
    char **bagg = my_str_to_word_array(temp, '|');
    now_inventory(window, bagg, bag);
        while (1) {
        if (sfKeyboard_isKeyPressed(sfKeyP))
            break;
        display_spr_inv1(window, bag);
    }
}

int now_inventory(sfRenderWindow *window, char **tab, inv_t *bag)
{
    int a = 0, x = 0, y = 0;
    for (; tab[a] != NULL; a++) {
        sfSprite_setTexture(bag->i_[a], bag->item[my_getnbr(tab[a])], sfTrue);
        if (a == 12)
            break;
    }
}