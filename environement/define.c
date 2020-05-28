/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** define
*/

#include "../my.h"

void set_perso(env_t *env)
{
    env->x = 0;
    env->y = 0;
    env->vitesse = 5;
    env->perso = sfSprite_create();
    char *classe = choix_classe(env);
    env->perso_tex = sfTexture_createFromFile(classe, NULL);
    free(classe);
    sfSprite_setTexture(env->perso, env->perso_tex, sfTrue);
    env->perso_anim = (sfIntRect){env->x, env->y, 30, 32};
    sfSprite_setTextureRect(env->perso, env->perso_anim);
    env->perso_pos.x = 750;
    env->perso_pos.y = 745;
}

void define_view(env_t *env)
{
    env->seed = (int) malloc(sizeof(char));
    sfSprite_setPosition(env->perso, env->perso_pos);
    env->view = sfView_create();
    env->view_hub_center = env->perso_pos;
    env->view_hub_pos.x = 1920;
    env->view_hub_pos.y = 1080;
    sfView_setCenter(env->view, env->view_hub_center);
    sfView_setSize(env->view, env->view_hub_pos);
    sfView_zoom(env->view, 0.4);
}

void set_pnj_other(env_t *env)
{
    env->pnj_marchand = sfSprite_create();
    env->pnj_marchand_tex = sfTexture_createFromFile("map/pnj/forge.png", NULL);
    sfSprite_setTexture(env->pnj_marchand, env->pnj_marchand_tex, sfTrue);
    env->pnj_marchand_anim = (sfIntRect){32, 0, 30, 32};
    sfSprite_setTextureRect(env->pnj_marchand, env->pnj_marchand_anim);
    env->pnj_marchand_pos.x = 350;
    env->pnj_marchand_pos.y = 615;
    sfSprite_setPosition(env->pnj_marchand, env->pnj_marchand_pos);
    env->pnj_piano = sfSprite_create();
    env->pnj_piano_tex = sfTexture_createFromFile("map/pnj/piano.png", NULL);
    sfSprite_setTexture(env->pnj_piano, env->pnj_piano_tex, sfTrue);
    env->pnj_piano_anim = (sfIntRect){32, 0, 30, 32};
    sfSprite_setTextureRect(env->pnj_piano, env->pnj_piano_anim);
    env->pnj_piano_pos.x = 1120;
    env->pnj_piano_pos.y = 623;
    sfSprite_setPosition(env->pnj_piano, env->pnj_piano_pos);
}

void set_pnj(env_t *env)
{
    env->pnj_dj = sfSprite_create();
    env->pnj_dj_tex = sfTexture_createFromFile("map/pnj/dj.png", NULL);
    sfSprite_setTexture(env->pnj_dj, env->pnj_dj_tex, sfTrue);
    env->pnj_dj_anim = (sfIntRect){32, 0, 30, 32};
    sfSprite_setTextureRect(env->pnj_dj, env->pnj_dj_anim);
    env->pnj_dj_pos.x = 1102;
    env->pnj_dj_pos.y = 195;
    sfSprite_setPosition(env->pnj_dj, env->pnj_dj_pos);
    env->pnj_slime = sfSprite_create();
    env->pnj_slime_tex = sfTexture_createFromFile("map/pnj/slime.png", NULL);
    sfSprite_setTexture(env->pnj_slime, env->pnj_slime_tex, sfTrue);
    env->pnj_slime_anim = (sfIntRect){0, 64, 30, 32};
    sfSprite_setTextureRect(env->pnj_slime, env->pnj_slime_anim);
    env->pnj_slime_pos.x = 257;
    env->pnj_slime_pos.y = 169;
    sfSprite_setPosition(env->pnj_slime, env->pnj_slime_pos);
    set_pnj_other(env);
}

void define(env_t *env)
{
    test(env);
    env->nb_feuille = 0;
    env->move_perso = sfClock_create();
    env->inter = sfSprite_create();
    env->inter_tex = sfTexture_createFromFile("map/bouton_inter.png", NULL);
    sfSprite_setTexture(env->inter, env->inter_tex, sfTrue);
    env->inter_pos.x = -500;
    env->inter_pos.y = -500;
    sfSprite_setPosition(env->inter, env->inter_pos);
    set_perso(env);
    set_pnj(env);
    set_dj(env);
    set_perso(env);
    define_view(env);
}