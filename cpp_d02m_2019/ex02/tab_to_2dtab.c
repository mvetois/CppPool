/*
** EPITECH PROJECT, 2020
** CPP Pool D02M
** File description:
** tab_to_2dtab
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void tab_to_2dtab(const int *tab, int length, int width, int ***res);

void tab_to_2dtab(const int *tab, int length, int width, int ***res)
{
    *res = malloc(sizeof(int *) * length + 1);
    for (int i = 0; i != length; i++) {
        (*res)[i] = malloc(sizeof(int) * width + 1);
        for (int j = 0; j != width; j++) {
            (*res)[i][j] = tab[i * width + j];
        }
    }
}