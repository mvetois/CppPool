/*
** EPITECH PROJECT, 2020
** CPP Pool D03
** File description:
** empty
*/

#include "string.h"

int empty(const string_t *this)
{
    if (this == NULL)
        return (1);
    if (this->str == NULL)
        return (1);
    if (my_strlen(this->str) == 0)
        return (1);
    return (0);
}