/*
** EPITECH PROJECT, 2020
** CPP Pool D01
** File description:
** menger
*/

#include "menger.h"

void algo(int x, int y, int size, int level)
{
    int a = 0;

    if (level > 0) {
        a = (x + 2 * size / 3) - (x + size / 3);
        printf("%03d %03d %03d\n", a, (y + size / 3), (x + size / 3));
        algo(x, y, size / 3, level - 1);
        algo(x + size / 3, y, size / 3, level - 1);
        algo(x + 2 * size / 3, y, size / 3, level - 1);
        algo(x, y + size / 3, size / 3, level - 1);
        algo(x + 2 * size / 3, y + size / 3, size / 3, level - 1);
        algo(x, y + 2 * size / 3, size / 3, level - 1);
        algo(x + size / 3, y + 2 * size / 3, size / 3, level - 1);
        algo(x + 2 * size / 3, y + 2 * size / 3, size / 3, level - 1);
    }
}
