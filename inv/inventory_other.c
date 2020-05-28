/*
** EPITECH PROJECT, 2020
** inventory
** File description:
** where you have item
*/

#include "../my.h"

int open_stuff(sfRenderWindow *window, char **tab, inv_t *bag, char *path)
{
    int t = 0, h = 0;
    char temp1[4096], temp2[4096];
    for (int x = 0; tab[3][x] != ':'; x++) {
        temp1[t] = tab[3][x];
        t++;
    }
    sfSprite_setTexture(bag->i_[12], bag->item[my_getnbr(temp1)], sfTrue);
    for (int y = 0; tab[4][y] != ':'; y++) {
        temp2[h] = tab[4][y];
        h++;
    }
    sfSprite_setTexture(bag->i_[13], bag->item[my_getnbr(temp2)], sfTrue);
    add_stats(temp2, 2, path);
    while (1) {
        if (sfKeyboard_isKeyPressed(sfKeyP))
            break;
        display_spr_stuff1(window, bag);
    }
}

char *build_buffer(char *item)
{
    int y = 4, t = 0, k = 0;
    char *temp = malloc(sizeof(char) * 100);
    char *final = malloc(sizeof(char) * 100);
    temp[0] = 'i';
    temp[1] = 'n';
    temp[2] = 'v';
    temp[3] = '/';
    for (; item[t] != NULL; t++) {
        if (item[t] > '0' && item[y] < '9') {
            temp[y] = item[t];
            y++;
        }
    }
    temp[y] = '_';
    temp[y+1] = 'i';
    temp[y+2] = 't';
    temp[y+3] = 'e';
    temp[y+4] = 'm';
    for (int u = 0; temp[u] != '\0'; u++) {
        if (temp[u] == 'm' || temp[u] == 't' || temp[u] == 'e' || temp[u] == '.'
            || (temp[u] > '0' && temp[u] < '9') || temp[u] == 'i' ||
            temp[u] == 'v' || temp[u] == '/' || temp[u] == '_' ||
            temp[u] == 'n'){
            final[k] = temp[u];
            k++;
        }
    }
    return (final);
}

int add_stats(char *item, int type, char *path)
{
    char buffer[4096], buffer2[4096];
    char *temp = build_buffer(item);
    int fd = open(path, O_RDONLY);
    int fd2 = open(temp, O_RDONLY);
    read(fd, buffer, 4096);
    read(fd2, buffer2, 4096);
    char **character = my_str_to_word_array(buffer, '\n');
    char **stuff = my_str_to_word_array(buffer2, '\n');
    change_stats(character, stuff, type, path);
}

int change_stats(char **pers, char **stuff, int type, char **path)
{
    FILE *fp = fopen(path, "w");
    fclose(fp);
    int fd = open(path, O_RDWR);
    for (int u = 0; pers[u] != NULL; u++) {
        if (u == 3 && type == 1)
            write(fd, stuff[0], my_strlen(stuff[0]));
        else if (u == 4 && type == 2)
            write(fd, stuff[0], my_strlen(stuff[0]));
        else
            write(fd, pers[u], my_strlen(pers[u]));
    }
}