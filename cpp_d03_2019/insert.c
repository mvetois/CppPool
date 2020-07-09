/*
** EPITECH PROJECT, 2020
** CPP Pool D03
** File description:
** insert
*/

#include "string.h"
#include <string.h>

void insert_c(string_t *this, size_t pos, const char *str)
{
    char *t = NULL;
    int z = 0;

    if (this->str == NULL)
        return;
    if (pos > my_strlen(this->str))
        return (append_c(this, str));
    t = malloc(sizeof(char) * (my_strlen(this->str) + my_strlen(str) + 2));
    t = my_strcpy(t, this->str);
    for (int i = pos, j = 0; i < my_strlen(str) + pos; i++) {
        for (int a = my_strlen(this->str) + 1 + my_strlen(str); a > i; a--) {
            t[a] = t[a - 1];
        }
        t[i] = str[j++];
    }
    free(this->str);
    this->str = t;
}

void insert_s(string_t *this, size_t pos, const string_t *str)
{
    find_c(this, str->str, pos);
}