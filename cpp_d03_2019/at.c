/*
** EPITECH PROJECT, 2020
** CPP Pool D03
** File description:
** at
*/

#include "string.h"

char at(const string_t *this, size_t pos)
{
    if (pos > (size_t)my_strlen(this->str) - 1)
        return (-1);
    return (this->str[pos]);
}
