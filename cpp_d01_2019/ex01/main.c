/*
** EPITECH PROJECT, 2020
** CPP Pool D02
** File description:
** main
*/

#include "menger.h"

int main(int argc, char **argv)
{
    int size;
    int level;
    int suite = 1;

    if (argc != 3)
        return (84);
    size = atoi(argv[1]);
    level = atoi(argv[2]);
    if (size == 0 || level == 0)
        return (84);
    for (; suite <= size;)
        suite = suite * 3;
    if (suite == size || (level < 0 || (pow(3, level) > size)))
        return (84);
    algo(0, 0, size, level);
    return (0);
}