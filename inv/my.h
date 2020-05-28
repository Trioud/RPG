/*
** EPITECH PROJECT, 2019
** Projets
** File description:
** my.h
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Graphics/Export.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Graphics/Types.h>
#include <SFML/System/Vector2.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct env env_t;
struct env
{
    sfEvent event;
    sfSprite *hub;
    sfTexture *hub_tex;
    sfSprite *dj_a;
    sfTexture *dj_a_tex;
    sfSprite *dj_b;
    sfTexture *dj_b_tex;
    sfSprite *dj_c;
    sfTexture *dj_c_tex;
    sfView *view;
    sfVector2f view_hub_center;
    sfVector2f view_hub_pos;
    sfSprite *perso;
    sfTexture *perso_tex;
    sfVector2f perso_pos;
    sfIntRect perso_anim;
    sfClock *clock_s;
    sfClock *move_perso;
    int dj;
    int x;
    int y;
    int vitesse;
};

typedef struct inv inv_t;
struct inv
{
    sfEvent event;
    sfTexture *inventory;
    sfSprite *inv;
    sfTexture *stuffed;
    sfSprite *stuff;
    sfVector2f inv_pos;
    sfVector2f stuff_pos;
    sfTexture **item;
    sfSprite **i_;
    sfVector2f i_2_pos;
    sfVector2f i_3_pos;
    sfVector2f i_4_pos;
    sfVector2f i_5_pos;
    sfVector2f i_6_pos;
    sfVector2f i_7_pos;
    sfVector2f i_8_pos;
    sfVector2f i_9_pos;
    sfVector2f i_10_pos;
    sfVector2f i_11_pos;
    sfVector2f i_12_pos;
    sfVector2f i_1_pos;
    sfTexture *item_false;
};

char **my_str_to_word_array(char *str, char c);
int inventory1(int s_o_i, sfRenderWindow *window, char *path);
int define_spr_inv1(sfRenderWindow *window, inv_t *bag);
int open_inv(sfRenderWindow *window, char **file, inv_t *bag);
int now_inventory(sfRenderWindow *window, char **tab, inv_t *bag);
int open_stuff(sfRenderWindow *window, char **file, inv_t *bag);
int display_spr_inv1(sfRenderWindow *window, inv_t *bag);
int display_spr_stuff1(sfRenderWindow *window, inv_t *bag);
int define_spr_items(sfRenderWindow *window, inv_t *bag);
int define_spr_items2(sfRenderWindow *window, inv_t *bag);
int define_spr_items3(sfRenderWindow *window, inv_t *bag);
int define_spr_pos(sfRenderWindow *window, inv_t *bag);
int define_spr_pos2(sfRenderWindow *window, inv_t *bag);

void my_putchar(char c);
int my_putstr(char const *str);
int hub(sfRenderWindow *window);
void poll_event(env_t *env, sfRenderWindow *window);
void draw_all(env_t *env, sfRenderWindow *window);
void is_open(env_t *env, sfRenderWindow *win);
void define(env_t *env);
void dj_a(sfRenderWindow *win, env_t *env);
void boss_a(sfRenderWindow *win, env_t *env);
void boss_b(sfRenderWindow *win, env_t *env);
void dj_b(sfRenderWindow *win, env_t *env);
void boss_c(sfRenderWindow *win, env_t *env);
void dj_c(sfRenderWindow *win, env_t *env);
int combat (sfRenderWindow *window, char *w_donjon, env_t *env);
void atk_button(sfRenderWindow *window);
void run_button(sfRenderWindow *window);
void go_down(env_t *env);
void go_top(env_t *env);
void go_right(env_t *env);
void go_left(env_t *env);
void deplacement(env_t *env);
void left_dj_a(env_t *env);
void right_dj_a(env_t *env);
void top_dj_a(env_t *env);
void down_dj_a(env_t *env);
void down_dj_b(env_t *env);
void top_dj_b(env_t *env);
void right_dj_b(env_t *env);
void left_dj_b(env_t *env);
void left_dj_c(env_t *env);
void right_dj_c(env_t *env);
void top_dj_c(env_t *env);
void down_dj_c(env_t *env);
void is_block_down(env_t *env);
void is_block_top(env_t *env);
void is_block_right(env_t *env);
void is_block_left(env_t *env);
