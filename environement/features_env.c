/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** features_env
*/

#include "../my.h"

void choix_perso(env_t *env)
{
    if (env->save_nb == 1)
        catcat(env->filepath, "saveone");
    if (env->save_nb == 2)
        catcat(env->filepath, "savetwo");
    if (env->save_nb == 3)
        catcat(env->filepath, "savethree");
}

void apply_info_perso(sfRenderWindow *window, env_t *env)
{
    env->filepath = malloc(sizeof(char) * 500);
    set_filepath(env);
    choix_perso(env);
    env->savefile = read_file(env->filepath, env);
}