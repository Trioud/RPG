/*
** EPITECH PROJECT, 2020
** de
** File description:
** de
*/

#include "my.h"

int first_rows(struct items_here *y)
{
    if (y->mo.x > 71 && y->mo.x < 71 + 70
        && 198 < y->mo.y && 198 + 142 > y->mo.y) {
        if (y->gold_int < 50)
            return (84);
        else {
            y->gold_int -= 50;
            he_bought(0, y);
        }
    }
    if (y->mo.x > 71 && y->mo.x < 71 + 70
        && 399 < y->mo.y && 399 + 142 > y->mo.y) {
        if (y->gold_int < 50)
            return (84);
        else {
            y->gold_int -= 50;
            he_bought(1, y);
        }
    }
    if (first_shelf(y) == 84)
        return (84);
    return (0);
}

int second_rows(struct items_here *y)
{
    if (y->mo.x > 481 && y->mo.x < 481 + 70
        && 200 < y->mo.y && 200 + 142 > y->mo.y) {
        if (y->gold_int < 45)
            return (84);
        else {
            y->gold_int -= 45;
            he_bought(4, y);
        }
    }
    if (y->mo.x > 481 && y->mo.x < 481 + 70
        && 389 < y->mo.y && 389 + 142 > y->mo.y) {
        if (y->gold_int < 55)
            return (84);
        else {
            y->gold_int -= 55;
            he_bought(5, y);
        }
    }
    if (second_shelf(y) == 84)
        return (84);
    return (0);
}

int third_rows(struct items_here *y)
{
    if (y->mo.x > 978 && y->mo.x < 978 + 70
        && 194 < y->mo.y && 194 + 142 > y->mo.y) {
        if (y->gold_int < 125)
            return (84);
        else {
            y->gold_int -= 125;
            he_bought(8, y);
        }
    }
    if (y->mo.x > 978 && y->mo.x < 978 + 70
        && 383 < y->mo.y && 383 + 142 > y->mo.y) {
        if (y->gold_int < 165)
            return (84);
        else {
            y->gold_int -= 165;
            he_bought(9, y);
        }
    }
    if (third_shelf(y) == 84)
        return (84);
    return (0);
}

int fourth_rows(struct items_here *y)
{
    if (y->mo.x > 1367 && y->mo.x < 1367 + 70
        && 195 < y->mo.y && 195 + 142 > y->mo.y) {
        if (y->gold_int < 250)
            return (84);
        else {
            y->gold_int -= 250;
            he_bought(12, y);
        }
    }
    if (y->mo.x > 1367 && y->mo.x < 1367 + 70
        && 379 < y->mo.y && 379 + 142 > y->mo.y) {
        if (y->gold_int < 500)
            return (84);
        else {
            y->gold_int -= 500;
            he_bought(13, y);
        }
    }
    if (fourth_shelf(y) == 84)
        return (84);
    return (0);
}

int fifth_rows(struct items_here *y)
{
    if (y->mo.x > 1720 && y->mo.x < 1720 + 70
        && 195 < y->mo.y && 195 + 142 > y->mo.y) {
        if (y->gold_int < 666)
            return (84);
        else {
            y->gold_int -= 666;
            he_bought(16, y);
        }
    }
    if (y->mo.x > 1720 && y->mo.x < 1720 + 70
        && 399 < y->mo.y && 399 + 142 > y->mo.y) {
        if (y->gold_int < 600)
            return (84);
        else {
            y->gold_int -= 600;
            he_bought(17, y);
        }
    }
    if (fifth_shelf(y) == 84)
        return (84);
    return (0);
}
