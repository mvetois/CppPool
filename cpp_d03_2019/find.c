/*
** EPITECH PROJECT, 2020
** CPP Pool D03
** File description:
** find
*/

#include "string.h"

int find_s(const string_t *this, const string_t *str, size_t pos)
{
    return (find_c(this, str->str, pos));
}

static int find_c_bis(const char *str, int i, const string_t *this, size_t pos)
{
    int t = 0;

    if (str[0] == this->str[i]) {
        t = 0;
        for (int j = 0; j < my_strlen(str); j++) {
            t = (str[j] != this->str[j + i]) ? t++ : t;
        }
        if (t == 0)
            return (i - pos);
    }
    return (-1);
}

int find_c(const string_t *this, const char *str, size_t pos)
{
    int r = 0;

    if (!this || !this->str || !str)
        return (-1);
    for (size_t i = pos; i < my_strlen(this->str) - my_strlen(str); i++) {
        r = find_c_bis(str, i, this, pos);
        if (r != -1)
            return (r);
    }
    return (-1);
}