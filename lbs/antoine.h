/*
** EPITECH PROJECT, 2019
** defender
** File description:
** my.h
*/

#include <sys/stat.h>
#include <sys/types.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <time.h>

typedef struct statis statis_t;
struct statis
{
    char *name;
    char *class;
    char *level;
    int type_arme;
    int stat_arme;
    int type_armor;
    int stat_armor;
    char *slime_one;
    int slime_one_type;
    int slime_one_atk;
    char *slime_two;
    int slime_two_type;
    int slime_two_atk;
    char *slime_three;
    int slime_three_type;
    int slime_three_atk;
    char *inventory;
    int money;
    int force;
    int intel;
    int agi;
    int vie;
    int chance;
    char *boss;
    int boss_vie;
    int boss_atk;
    int boss_res_p;
    int boss_res_m;
    int aff_crit;
    int aff_esquive;
};

typedef struct element element_t;
struct element
{
    sfSprite *sprite_back;
    sfTexture *texture_back;
    sfVector2f pos_back;
};

int combat (sfRenderWindow *window, char *w_donjon);
void create_element(element_t *elem, statis_t *statis, char *w_donjon);
char *where_is_txt();
char **where_is_fiche(char *buffer);
char **where_is_fiche_two(char **fiche, char *buffer);
char *find_class(char **fiche);
char *find_level(char **fiche);
char *find_arme(char **fiche);
char *find_armor(char **fiche);
char *find_slime_one(char **fiche);
char *find_slime_two(char **fiche);
char *find_slime_three(char **fiche);
char *find_inventory(char **fiche);
char *find_money(char **fiche);
char *find_force(char **fiche);
char *find_intel(char **fiche);
char *find_agi(char **fiche);
char *find_vie(char **fiche);
char *find_chance(char **fiche);
void what_charac(statis_t *statis, sfRenderWindow *window);
void what_slime(statis_t *statis, sfRenderWindow *window);
char *my_strcat(char *str1, char *str2);
int my_strlen(char *str);
int find_stat(char *buffer, char e, char f);
char *find (char *buffer, int line);
void my_putstr(char const *str);
void what_boss(statis_t *statis, sfRenderWindow *window, char *w_donjon);
void my_putchar(char c);
void turn (statis_t *statis);
int what_a_boss(char *w_donjon);
void boss_sable (statis_t *statis);
void boss_jardin (statis_t *statis);
void boss_mine (statis_t *statis);
void create_slime_one(statis_t *statis);
void create_slime_two(statis_t *statis);
void create_slime_three(statis_t *statis);
int my_getnbr(char const *str);
void slime_one_turn(statis_t *statis);
void slime_two_turn(statis_t *statis);
void slime_three_turn(statis_t *statis);
char *its(int i);
void what_life(statis_t *statis, sfRenderWindow *window);
void affiche_crit(statis_t *statis, sfRenderWindow *window);
void affiche_dodge(statis_t *statis, sfRenderWindow *window);
void life_monster(statis_t *statis, sfRenderWindow *window);
void life_hero(statis_t *statis, sfRenderWindow *window);
int what_a_slime_two(statis_t *statis);
int what_a_slime_three(statis_t *statis);
void pre_roll (sfRenderWindow *window);
void affichage(sfRenderWindow *win, element_t *el, statis_t *sta, char *w_donj);
void start_plosion(sfRenderWindow *window);
void loot_anime_w8(sfRenderWindow *window, char *pof_slime, int x, int y);
char *end_plosion(char *pof_plosion);
void af_f_one(int i, sfRenderWindow *window);
void af_f_two(int i, sfRenderWindow *window);
void af_f_trois(sfRenderWindow *window, char *slime);
char *Slime_rdm (sfRenderWindow *window);
char *end_roll(char *pof_slime);
void htp(void);