/*
** EPITECH PROJECT, 2020
** CPP Pool D03
** File description:
** clear
*/

#include "string.h"


void clear(string_t *this)
{
    if (this != NULL || this->str != NULL)
        memset(this->str, 0, my_strlen(this->str));
    return;
}