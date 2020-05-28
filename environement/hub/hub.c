/*
** EPITECH PROJECT, 2019
** game.c
** File description:
** game
*/

#include "../../my.h"

void start_hub(sfRenderWindow *window, int nb_save)
{
    env_t *env = malloc(sizeof(env_t));
    env->save_nb = nb_save;
    apply_info_perso(window, env);
    define(env);
    hub(window, nb_save, env);

}

int hub(sfRenderWindow *window, int nb_save, env_t *env)
{
    env->perso_pos.x = 725;
    env->perso_pos.y = 709;
    env->save_nb = nb_save;
    is_open(env, window);
    return (0);
}

void is_open(env_t *env, sfRenderWindow *win)
{
    sfRenderWindow_setView(win, env->view);
    while (sfRenderWindow_isOpen(win)){
        env->pseudo_pos.x = env->perso_pos.x;
        env->pseudo_pos.y = env->perso_pos.y - 15;
        sfText_setPosition(env->pseudo, env->pseudo_pos);
        sfSprite_setPosition(env->perso, env->perso_pos);
        sfView_setCenter(env->view, env->perso_pos);
        sfRenderWindow_setView(win, env->view);
        poll_event(env, win);
        draw_all(env, win);
    }
}

void poll_event(env_t *env, sfRenderWindow *win)
{
    while (sfRenderWindow_pollEvent(win, &env->event)){
        if (sfKeyboard_isKeyPressed(sfKeyEscape))
            sfRenderWindow_close(win);
        if (sfKeyboard_isKeyPressed(sfKeyE))
            lance_int_hub(env, win);
        if (sfKeyboard_isKeyPressed(sfKeyI)) {
            main_inventory(1, env->filepath);
        }
        if (sfKeyboard_isKeyPressed(sfKeyR)) {
            menu_quest(env->nb_feuille, env->nb_dj_fini);
        }
        deplacement(env);
        is_block_left(env);
        is_block_right(env);
        is_block_top(env);
        is_block_down(env);
    }
}