/*
** EPITECH PROJECT, 2020
** CPP Pool D03
** File description:
** append
*/

#include "string.h"

void append_s(string_t *this, const string_t *ap)
{
    string_t a;
    char *tmp;

    if (this->str != NULL) {
        tmp = malloc(sizeof(char) * (my_strlen(this->str) + 1));
        tmp = my_strcpy(tmp, this->str);
        free(this->str);
    }
    if (ap == NULL)
        return;
    a.str = malloc(sizeof(char) * (my_strlen(ap->str) + my_strlen(tmp) + 1));
    if (tmp != NULL) {
        a.str = my_strcpy(a.str, tmp);
        free(tmp);
    }
    a.str = my_strcat(a.str, ap->str);
    *this = a;
}

void append_c(string_t *this, const char *ap)
{
    string_t a;
    char *tmp;

    if (this->str != NULL) {
        tmp = malloc(sizeof(char) * (my_strlen(this->str) + 1));
        tmp = my_strcpy(tmp, this->str);
        free(this->str);
    }
    a.str = malloc(sizeof(char) * (my_strlen(ap) + my_strlen(tmp) + 1));
    if (tmp != NULL) {
        a.str = my_strcpy(a.str, tmp);
        free(tmp);
    }
    a.str = my_strcat(a.str, ap);
    *this = a;
}