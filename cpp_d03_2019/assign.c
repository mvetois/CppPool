/*
** EPITECH PROJECT, 2020
** CPP Pool D03
** File description:
** assign
*/

#include "string.h"

void assign_s(string_t *this, const string_t *str)
{
    string_t a;

    if (this->str != NULL)
        free(this->str);
    if (str == NULL)
        return;
    a.str = malloc(sizeof(char) * (my_strlen(str->str) + 1));
    a.str = my_strcpy(a.str, str->str);
    *this = a;
}

void assign_c(string_t *this, const char *s)
{
    string_t a;

    if (this->str != NULL)
        free(this->str);
    a.str = malloc(sizeof(char) * (my_strlen(s) + 1));
    a.str = my_strcpy(a.str, s);
    *this = a;
}
