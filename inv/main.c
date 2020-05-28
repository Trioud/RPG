/*
** EPITECH PROJECT, 2020
** main
** File description:
** temporary main for tests
*/

#include "../my.h"

int main(int ac, char **av)
{
    if (ac != 2)
        return 84;
    int fd = open(av[1], O_RDONLY);
    sfVideoMode mod = {1920, 1080, 32};
    sfRenderWindow *w = sfRenderWindow_create(mod, "End", sfDefaultStyle, NULL);
    sfTexture *n = sfTexture_createFromFile(
        "End.jpg", NULL);
    sfSprite *nn = sfSprite_create();
    sfVector2f nn_pos = (sfVector2f) {0, 0};
    sfSprite_setTexture(nn, n, sfTrue);
    sfSprite_setPosition(nn, nn_pos);
    while (sfRenderWindow_isOpen(window)) {
        if (sfKeyboard_isKeyPressed(sfKeyEscape))
            break;
        if (sfKeyboard_isKeyPressed(sfKeyN))
            inventory1(1, w, fd);
        else if (sfKeyboard_isKeyPressed(sfKeyB))
            inventory1(2, w, fd);
        display_default(w, nn);
    }
}
