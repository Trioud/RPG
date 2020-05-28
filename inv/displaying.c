/*
** EPITECH PROJECT, 2020
** displaying
** File description:
** todisplay
*/

#include "../my.h"

int display_spr_inv1(sfRenderWindow *window, inv_t *bag)
{
    sfRenderWindow_drawSprite(window, bag->inv, NULL);
    for (int t = 0; t < 12; t++)
        sfRenderWindow_drawSprite(window, bag->i_[t], NULL);
    sfRenderWindow_display(window);
}

int display_spr_stuff1(sfRenderWindow *window, inv_t *bag)
{
    sfRenderWindow_drawSprite(window, bag->stuff, NULL);
    sfRenderWindow_drawSprite(window, bag->i_[12], NULL);
    sfRenderWindow_drawSprite(window, bag->i_[13], NULL);
    sfRenderWindow_display(window);
}

int display_default(sfRenderWindow *window, sfSprite *nn)
{
    sfRenderWindow_drawSprite(window, nn, NULL);
    sfRenderWindow_display(window);
}
