/*
** EPITECH PROJECT, 2020
** CPP Pool D03
** File description:
** split
*/

#include "string.h"
#include <string.h>

char **split_c(string_t *this, char separator)
{
    char *str = strdup(this->str);
    char sepa[2] = {separator, '\0'};
    char **t = NULL;
    int c = 0;

    strtok(str, sepa);
    while (strtok(NULL, sepa))
        c++;
    t = malloc((c + 2) * sizeof(char **));
    free(str);
    str = strdup(this->str);
    t[0] = strtok(str, sepa);
    c = 1;
    while ((t[c++] = strtok(NULL, sepa)));
    return (t);
}

string_t **split_s(string_t *this, char separator)
{
    int c = 0;
    char **t = split_c(this, separator);
    string_t **st;

    while (t[c++] != NULL);
    st = malloc(sizeof(string_t *) * (c + 1));
    st[c] = NULL;
    for (int i = 0; i < c - 1; i++) {
        st[i] = malloc(sizeof(string_t));
        string_init(st[i], t[i]);
    }
    for (int i = 0; t[i + 1] != NULL; i++)
        free(t[i]);
    free(t);
}