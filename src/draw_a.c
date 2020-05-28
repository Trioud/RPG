/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** draw_a.c
*/

#include "../my.h"

void draw_all(env_t *env, sfRenderWindow *window)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, env->hub, NULL);
    sfRenderWindow_drawSprite(window, env->pnj_dj, NULL);
    sfRenderWindow_drawSprite(window, env->pnj_slime, NULL);
    sfRenderWindow_drawSprite(window, env->pnj_marchand, NULL);
    if (env->nb_feuille >= 3)
        sfRenderWindow_drawSprite(window, env->pnj_piano, NULL);
    int_hub(env, window);
    sfRenderWindow_drawSprite(window, env->perso, NULL);
    sfRenderWindow_drawText(window, env->pseudo, NULL);
    sfRenderWindow_display(window);
}