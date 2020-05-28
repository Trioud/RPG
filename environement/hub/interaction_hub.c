/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** interaction
*/

#include "../../my.h"

void inter_hub_plus(env_t *env, sfRenderWindow *win)
{
    if (env->perso_pos.x >= 1080 && env->perso_pos.x <= 1135 &&
        env->perso_pos.y >= 200 && env->perso_pos.y <= 230) {
        env->inter_pos.x = 1090;
        env->inter_pos.y = 200;
        sfSprite_setPosition(env->inter, env->inter_pos);
        sfRenderWindow_drawSprite(win, env->inter, NULL);
    }
    if (env->nb_feuille >= 3) {
        if (env->perso_pos.x >= 1088 && env->perso_pos.x <= 1155 &&
            env->perso_pos.y >= 654 && env->perso_pos.y <= 674) {
            env->inter_pos.x = 1105;
            env->inter_pos.y = 690;
            sfSprite_setPosition(env->inter, env->inter_pos);
            sfRenderWindow_drawSprite(win, env->inter, NULL);
        }
    }
}

void int_hub(env_t *env, sfRenderWindow *win)
{
    if (env->perso_pos.x >= 280 && env->perso_pos.x <= 435 &&
        env->perso_pos.y >= 680 && env->perso_pos.y <= 700){
        env->inter_pos.x = 335;
        env->inter_pos.y = 660;
        sfSprite_setPosition(env->inter, env->inter_pos);
        sfRenderWindow_drawSprite(win, env->inter, NULL);
    }
    if (env->perso_pos.x >= 250 && env->perso_pos.x <= 455 &&
        env->perso_pos.y >= 200 && env->perso_pos.y <= 230){
        env->inter_pos.x = 340;
        env->inter_pos.y = 200;
        sfSprite_setPosition(env->inter, env->inter_pos);
        sfRenderWindow_drawSprite(win, env->inter, NULL);
    }
    inter_hub_plus(env, win);
}

void lance_dj(env_t *env, sfRenderWindow *win)
{
    int dj = rand() % (3);
    if (dj == 0)
        dj_a(win, env);
    if (dj == 1)
        dj_b(win, env);
    if (dj == 2)
        dj_c(win, env);

}

void lance_int_hub(env_t *env, sfRenderWindow *win)
{
    if (env->perso_pos.x >= 280 && env->perso_pos.x <= 435 &&
        env->perso_pos.y >= 680 && env->perso_pos.y <= 700){
            shop(env->filepath);
    }
    if (env->perso_pos.x >= 250 && env->perso_pos.x <= 455 &&
        env->perso_pos.y >= 200 && env->perso_pos.y <= 230){
        vdslm();
    }
    if (env->perso_pos.x >= 1080 && env->perso_pos.x <= 1135 &&
        env->perso_pos.y >= 200 && env->perso_pos.y <= 230) {
        lance_dj(env, win);
    }
    if (env->nb_feuille >= 3) {
        if (env->perso_pos.x >= 1088 && env->perso_pos.x <= 1155 &&
            env->perso_pos.y >= 654 && env->perso_pos.y <= 674) {
            quest_main();
        }
    }
}