/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** define_other
*/

#include "../my.h"

void set_dj(env_t *env)
{
    env->hub = sfSprite_create();
    env->hub_tex = sfTexture_createFromFile("map/hub.PNG", NULL);
    sfSprite_setTexture(env->hub, env->hub_tex, sfTrue);

    env->dj_a = sfSprite_create();
    env->dj_a_tex = sfTexture_createFromFile("map/dj_mine.PNG", NULL);
    sfSprite_setTexture(env->dj_a, env->dj_a_tex, sfTrue);

    env->dj_b = sfSprite_create();
    env->dj_b_tex = sfTexture_createFromFile("map/dj_plaine.PNG", NULL);
    sfSprite_setTexture(env->dj_b, env->dj_b_tex, sfTrue);

    env->dj_c = sfSprite_create();
    env->dj_c_tex = sfTexture_createFromFile("map/dj_pyrimide.PNG", NULL);
    sfSprite_setTexture(env->dj_c, env->dj_c_tex, sfTrue);
}

char *choix_classe(env_t *env)
{
    char *path = malloc(sizeof(char) * 500);
    int i = 0;
    path[0] = 'm';
    path[1] = 'a';
    path[2] = 'p';
    path[3] = '/';
    for (; env->savefile[i] != '\n'; i = i + 1);
    i = i + 1;
    for (int o = 4; env->savefile[i] != '\n'; i = i + 1){
        path[o] = env->savefile[i];
        o = o + 1;
    }
    catcat(path, ".png");
    return (path);

}

char *recup_pseudo(env_t *env)
{
    char *temp = malloc(sizeof(char) * 500);
    int i = 0;
    for (; env->savefile[i] != '\n'; i = i + 1) {
        temp[i] = env->savefile[i];
    }
    temp[i] = '\0';
    return (temp);
}

void test(env_t *env)
{
    env->nb_dj_fini = 0;
    env->pseudo = sfText_create();
    env->pseudo_pos.x = env->perso_pos.x + 5;
    env->pseudo_pos.y = env->perso_pos.y - 15;
    char *pseu = recup_pseudo(env);
    env->font = sfFont_createFromFile("font/GrindAndDeath_Demo.ttf");
    sfText_setColor(env->pseudo, sfBlack);
    sfText_setFont(env->pseudo, env->font);
    sfText_setCharacterSize(env->pseudo, 10);
    sfText_setString(env->pseudo, pseu);
    sfText_setPosition(env->pseudo, env->pseudo_pos);
}