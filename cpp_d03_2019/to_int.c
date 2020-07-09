/*
** EPITECH PROJECT, 2020
** CPP Pool D03
** File description:
** to_int
*/

#include "string.h"

int to_int(string_t *this)
{
    if (this->str == NULL)
        return (0);
    return atoi(this->str);
}