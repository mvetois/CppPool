/*
** EPITECH PROJECT, 2020
** CPP Pool D03
** File description:
** compare
*/

#include "string.h"

int compare_s(const string_t *this, const string_t *str)
{
    const char *s1 = this->str;
    const char *s2 = str->str;
    char c1;
    char c2;

    do {
        c1 = *s1++;
        c2 = *s2++;
        if (c1 == '\0')
            return c1 - c2;
    }
    while (c1 == c2);
    return c1 - c2;
}

int compare_c(const string_t *this, const char *str)
{
    const char *s1 = this->str;
    const char *s2 = str;
    char c1;
    char c2;

    do {
        c1 = *s1++;
        c2 = *s2++;
        if (c1 == '\0')
            return c1 - c2;
    }
    while (c1 == c2);
    return c1 - c2;
}