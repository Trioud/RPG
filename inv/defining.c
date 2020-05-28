/*
** EPITECH PROJECT, 2020
** defining
** File description:
** to define
*/

#include "../my.h"

int define_spr_items(sfRenderWindow *window, inv_t *bag)
{
    bag->item = malloc(sizeof(sfTexture*)*19);
    bag->i_ = malloc(sizeof(sfSprite*)*12);
    bag->item[0] = sfTexture_createFromFile("inv/0.png", NULL);
    bag->i_[0] = sfSprite_create();
    bag->item[1] = sfTexture_createFromFile(
        "inv/1.png", NULL);
    bag->i_[1] = sfSprite_create();
    bag->item[2] = sfTexture_createFromFile(
        "inv/2.png", NULL);
    bag->i_[2] = sfSprite_create();
    bag->item[3] = sfTexture_createFromFile(
        "inv/3.png", NULL);
    bag->i_[3] = sfSprite_create();
    bag->item[4] = sfTexture_createFromFile(
        "inv/4.png", NULL);
    bag->i_[4] = sfSprite_create();
    bag->item[5] = sfTexture_createFromFile(
        "inv/5.png", NULL);
    bag->i_[5] = sfSprite_create();
    define_spr_items2(window, bag);
}

int define_spr_items2(sfRenderWindow *window, inv_t *bag)
{
    bag->item[6] = sfTexture_createFromFile(
        "inv/6.png", NULL);
    bag->i_[6] = sfSprite_create();
    bag->item[7] = sfTexture_createFromFile(
        "inv/7.png", NULL);
    bag->i_[7] = sfSprite_create();
    bag->item[8] = sfTexture_createFromFile(
        "inv/8.png", NULL);
    bag->i_[8] = sfSprite_create();
    bag->item[9] = sfTexture_createFromFile(
        "inv/9.png", NULL);
    bag->i_[9] = sfSprite_create();
    bag->item[10] = sfTexture_createFromFile(
        "inv/10.png", NULL);
    bag->i_[10] = sfSprite_create();
    bag->item[11] = sfTexture_createFromFile(
        "inv/11.png", NULL);
    bag->i_[11] = sfSprite_create();
    define_spr_items3(window, bag);
}

int define_spr_items3(sfRenderWindow *window, inv_t *bag)
{
    bag->i_[12] = sfSprite_create();
    bag->i_[13] = sfSprite_create();
    bag->item[12] = sfTexture_createFromFile(
        "inv/12.png", NULL);
    bag->item[13] = sfTexture_createFromFile(
        "inv/13.png", NULL);
    bag->item[14] = sfTexture_createFromFile(
        "inv/14.png", NULL);
    bag->item[15] = sfTexture_createFromFile(
        "inv/15.png", NULL);
    bag->item[16] = sfTexture_createFromFile(
        "inv/16.png", NULL);
    bag->item[17] = sfTexture_createFromFile(
        "inv/17.png", NULL);
    bag->item[18] = sfTexture_createFromFile(
        "inv/18.png", NULL);
    bag->item_false = sfTexture_createFromFile(
        "inv/Blind.png", NULL);
    define_spr_pos(window, bag);
}

int define_spr_pos(sfRenderWindow *window, inv_t *bag)
{
    bag->i_1_pos = (sfVector2f) {1040, 370};
    bag->i_2_pos = (sfVector2f) {1189, 370};
    bag->i_3_pos = (sfVector2f) {1355, 370};
    bag->i_4_pos = (sfVector2f) {1040, 495};
    bag->i_5_pos = (sfVector2f) {1189, 495};
    bag->i_6_pos = (sfVector2f) {1355, 495};
    bag->i_7_pos = (sfVector2f) {1040, 618};
    bag->i_8_pos = (sfVector2f) {1189, 618};
    bag->i_9_pos = (sfVector2f) {1355, 618};
    bag->i_10_pos = (sfVector2f) {1040, 756};
    bag->i_11_pos = (sfVector2f) {1189, 756};
    bag->i_12_pos = (sfVector2f) {1355, 756};
    bag->stuff_1_pos = (sfVector2f) {1075, 456};
    bag->stuff_2_pos = (sfVector2f) {1295, 456};
    define_spr_pos2(window, bag);
}

int define_spr_pos2(sfRenderWindow *window, inv_t *bag)
{
    sfSprite_setPosition(bag->i_[0], bag->i_1_pos);
    sfSprite_setPosition(bag->i_[1], bag->i_2_pos);
    sfSprite_setPosition(bag->i_[2], bag->i_3_pos);
    sfSprite_setPosition(bag->i_[3], bag->i_4_pos);
    sfSprite_setPosition(bag->i_[4], bag->i_5_pos);
    sfSprite_setPosition(bag->i_[5], bag->i_6_pos);
    sfSprite_setPosition(bag->i_[6], bag->i_7_pos);
    sfSprite_setPosition(bag->i_[7], bag->i_8_pos);
    sfSprite_setPosition(bag->i_[8], bag->i_9_pos);
    sfSprite_setPosition(bag->i_[9], bag->i_10_pos);
    sfSprite_setPosition(bag->i_[10], bag->i_11_pos);
    sfSprite_setPosition(bag->i_[11], bag->i_12_pos);
    sfSprite_setPosition(bag->i_[12], bag->stuff_1_pos);
    sfSprite_setPosition(bag->i_[13], bag->stuff_2_pos);
}
