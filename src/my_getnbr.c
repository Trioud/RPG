/*
** EPITECH PROJECT, 2019
** de
** File description:
** de
*/

int my_getnbr(char const *str)
{
    int x = 0;
    int i = 0;
    int y = 0;
    int w = 1;
    if (str[i] < '0' && str[i] > '9')
        return (84);
    while (str[i] != '\0') {
        if (y <= 0) {
            if (str[i] == '-')
                w = w * -1;
            while (str[i] >= '0' && str[i] <= '9') {
                x = x * 10 + str[i] - 48;
                y = y + 1;
                i = i + 1;
            }
        }
        i = i + 1;
    }
    return (x * w);
}
