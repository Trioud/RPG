/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** dj_a
*/

#include "../../my.h"

void boss_c(sfRenderWindow *win, env_t *env)
{
    if (env->perso_pos.x >= 693 && env->perso_pos.x <= 773 &&
        env->perso_pos.y >= 455 && env->perso_pos.y <= 535){
        env->dj = 1;
        if (start_cbt("pyra_boss", env) == 2) {
            env->nb_dj_fini += 1;
            end_cbt(2);
        }
        else{
            end_cbt(1);
        }
        hub(win, env->save_nb, env);
    }
}

void draw_dj_c(sfRenderWindow *win, env_t *env)
{
    sfRenderWindow_clear(win, sfBlack);
    sfRenderWindow_drawSprite(win, env->dj_c, NULL);
    int_djc(win, env);
    sfRenderWindow_drawSprite(win, env->perso, NULL);
    sfRenderWindow_drawText(win, env->pseudo, NULL);
    sfRenderWindow_display(win);
}

void event_dj_c(sfRenderWindow *win, env_t *env)
{
    while (sfRenderWindow_pollEvent(win, &env->event)) {
        if (sfKeyboard_isKeyPressed(sfKeyEscape))
            sfRenderWindow_close(win);
        deplacement(env);
        left_dj_c(env);
        right_dj_c(env);
        top_dj_c(env);
        down_dj_c(env);
        if (sfKeyboard_isKeyPressed(sfKeyT))
            hub(win, env->save_nb, env);
        if (sfKeyboard_isKeyPressed(sfKeyE)){
            lance_int_djc(win, env);
            float a = 1;
            sfTime b = sfSeconds(a);
            sfSleep(b);
        }
        if (sfKeyboard_isKeyPressed(sfKeyR)) {
            menu_quest(env->nb_feuille, env->nb_dj_fini);
        }
    }
}

void dj_c(sfRenderWindow *win, env_t *env)
{
    sfRenderWindow_setView(win, env->view);
    env->perso_pos.x = 378;
    env->perso_pos.y = 695;
    env->dj = 0;
    while (sfRenderWindow_isOpen(win)) {
        env->pseudo_pos.x = env->perso_pos.x;
        env->pseudo_pos.y = env->perso_pos.y - 15;
        sfText_setPosition(env->pseudo, env->pseudo_pos);
        sfSprite_setPosition(env->perso, env->perso_pos);
        sfView_setCenter(env->view, env->perso_pos);
        sfRenderWindow_setView(win, env->view);
        if (env->dj == 0){
            boss_c(win, env);
        }
        event_dj_c(win, env);
        draw_dj_c(win, env);
    }
}