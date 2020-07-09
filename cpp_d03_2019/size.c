/*
** EPITECH PROJECT, 2020
** CPP Pool D03
** File description:
** size
*/

#include "string.h"

int size(const string_t *this)
{
    if (this == NULL)
        return (-1);
    if (this->str == NULL)
        return (-1);
    return (my_strlen(this->str));
}
