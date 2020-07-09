/*
** EPITECH PROJECT, 2020
** CPP Pool D03
** File description:
** copy
*/

#include "string.h"

size_t copy(const string_t *this, char *s, size_t n, size_t pos)
{
    size_t  i = pos;
    size_t count = 0;

    if (!this || !this->str)
        return 0;
    if (pos > strlen(this->str) - 1)
        return 0;
    if (!s)
        return 0;
    while (this->str[i] != '\0' && count < n) {
        s[count++] = this->str[i--];
    }
    return (i - pos);
}