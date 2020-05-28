/*
** EPITECH PROJECT, 2020
** ded
** File description:
** e
*/

#include "my.h"

void id_boy(char *str, int id, struct items_here *y)
{
    if (id < 10) {
        if (str[y->i] == 'n') {
            y->tmp[y->p] = id + 48;
            y->p = y->p + 1;
            y->tmp[y->p] = '\n';
            y->p++;
            y->i += 5;
        }
        else {
            while (str[y->i] != '\n') {
                y->tmp[y->i] = str[y->i];
                y->i++;
                y->p++;
            }
            y->tmp[y->p] = '|';
            y->p++;
            y->tmp[y->p] = id + 48;
            y->p++;
            y->tmp[y->p] = '\n';
            y->p++;
            y->i++;
        }
    }
    if (id >= 10) {
        if (str[y->i] == 'n') {
            y->tmp = my_strcat(y->tmp, ito(id));
            y->p += 2;
            y->i += 4;
        }
        else {
            while (str[y->i] != '\n') {
                y->tmp[y->p] = str[y->i];
                y->i++;
                y->p++;
            }
            y->tmp[y->p] = '|';
            y->p++;
            y->tmp[y->p] = '\0';
            y->tmp = my_strcat(y->tmp, ito(id));
            y->p += 2;
            y->tmp[y->p] = '\n';
            y->p++;
            y->i++;
        }
    }
}

void fill_in(char *str, struct items_here *y)
{
    while (str[y->i] != '\0') {
        y->tmp[y->p] = str[y->i];
        y->i++;
        y->p++;
    }
    y->tmp[y->p] = '\0';
}

void add_to_inventory(char *str, struct items_here *y, int id)
{
    y->i = 0;
    int nb_back = 0;
    y->tmp = malloc(sizeof(char) * my_strlenght(str) + 10);

    while (str[y->i] != '\0') {
        if (str[y->i] == '\n')
            nb_back += 1;
        y->tmp[y->i] = str[y->i];
        if (nb_back == 8 && str[y->i+1] != '\0') {
            y->i++;
            y->p = y->i;
            break;
        }
        y->i++;
    }
    id_boy(str, id, y);
    fill_in(str, y);
}

int my_strlenght(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

void he_bought(int id, struct items_here *y)
{
    FILE *fp;
    char *str = malloc(sizeof(char) * 300);
    int fd = open(y->savefile, O_RDWR);
    read(fd, str, 200);
    add_to_inventory(str, y, id);
    close(fd);
    fp = fopen(y->savefile, "w");
    fwrite(y->tmp, 1, sizeof(char) * my_strlenght(y->tmp), fp);
    fclose(fp);
    if (id >= 0)
        sfText_setString(y->dialogues, "Thank you for your purchase\nI guess.");
    if (id >= 4)
        sfText_setString(y->dialogues, "That was a good choice.\nGood luck.\n");
    if (id >= 8)
        sfText_setString(y->dialogues, " How many creatures you \n   robbed ?");
    if (id >= 12)
        sfText_setString(y->dialogues, "You seem unstoppable now.\nAnd I fear what you've\n become");
    if (id >= 16)
        sfText_setString(y->dialogues, "Those are godly weapons.\nYou're now ready to take on\ngod himself");
}