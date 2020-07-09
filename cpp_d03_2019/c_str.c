/*
** EPITECH PROJECT, 2020
** CPP Pool D03
** File description:
** c_str
*/

#include "string.h"

const char *c_str(const string_t *this)
{
    if (this == NULL)
        return (NULL);
    if (this->str == NULL)
        return (NULL);
    return (this->str);
}