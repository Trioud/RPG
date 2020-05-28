/*
** EPITECH PROJECT, 2020
** de
** File description:
** de
*/

#include "my.h"

int first_shelf(struct items_here *y)
{
    if (y->mo.x > 71 && y->mo.x < 71 + 70
        && 606 < y->mo.y && 606 + 142 > y->mo.y){
        if (y->gold_int < 65)
            return (84);
        else {
            y->gold_int -= 65;
            he_bought(2, y);
        }
    }
    if (y->mo.x > 71 && y->mo.x < 71 + 70
        && 800 < y->mo.y && 800 + 142 > y->mo.y) {
        if (y->gold_int < 40)
            return (84);
        else {
            y->gold_int -= 40;
            he_bought(3, y);
        }
    }
}

int second_shelf(struct items_here *y)
{
    if (y->mo.x > 481 && y->mo.x < 481 + 70
        && 573 < y->mo.y && 573 + 142 > y->mo.y) {
        if (y->gold_int < 100)
            return (84);
        else {
            y->gold_int -= 100;
            he_bought(6, y);
        }
    }
    if (y->mo.x > 481 && y->mo.x < 481 + 70
        && 775 < y->mo.y && 775 + 142 > y->mo.y) {
        if (y->gold_int < 200)
            return (84);
        else {
            y->gold_int -= 200;
            he_bought(7, y);
        }
    }
}

int third_shelf(struct items_here *y)
{
    if (y->mo.x > 978 && y->mo.x < 978 + 70
        && 574 < y->mo.y && 574 + 142 > y->mo.y) {
        if (y->gold_int < 150)
            return (84);
        else {
            y->gold_int -= 150;
        }
    }
    if (y->mo.x > 978 && y->mo.x < 978 + 70
        && 756 < y->mo.y && 756 + 142 > y->mo.y) {
        if (y->gold_int < 185)
            return (84);
        else {
            y->gold_int -= 185;
        }
    }
}

int fourth_shelf(struct items_here *y)
{
    if (y->mo.x > 1367 && y->mo.x < 1367 + 70
        && 562 < y->mo.y && 562 + 142 > y->mo.y) {
        if (y->gold_int < 605)
            return (84);
        else {
            y->gold_int -= 605;
        }
    }
    if (y->mo.x > 1367 && y->mo.x < 1367 + 70
        && 756 < y->mo.y && 756 + 142 > y->mo.y) {
        if (y->gold_int < 650)
            return (84);
        else {
            y->gold_int -= 650;
        }
    }
}

int fifth_shelf(struct items_here *y)
{
    if (y->mo.x > 1720 && y->mo.x < 1720 + 70
        && 577 < y->mo.y && 577 + 142 > y->mo.y) {
        if (y->gold_int < 1000)
            return (84);
        else {
            y->gold_int -= 1000;
        }
    }
}