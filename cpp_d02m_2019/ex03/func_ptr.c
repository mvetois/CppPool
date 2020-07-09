/*
** EPITECH PROJECT, 2020
** CPP Pool D02M
** File description:
** func_ptr
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "func_ptr.h"

void print_normal(const char *str)
{
    printf("%s\n", str);
}

void print_reverse(const char *str)
{
    char *s = malloc(sizeof(char) * (strlen(str) + 1));
    char temp = '\0';

    s = strcpy(s, str);
    for (int i = 0, j = strlen(s) - 1; i < j; ++i, --j) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    printf("%s\n", s);
}

void print_upper(const char *str)
{
    char *s = malloc(sizeof(char) * (strlen(str) + 1));

    s = strcpy(s, str);
    for (size_t i = 0; i != strlen(s); i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
    }
    printf("%s\n", s);
}

void print_42(const char *str)
{
    char *s = malloc(sizeof(char) * (strlen(str) + 1));

    s = strcpy(s, str);
    free(s);
    printf("42\n");
}

void do_action(action_t action, const char *str)
{
    action_func_t list[] = {
        {PRINT_NORMAL, &print_normal},
        {PRINT_REVERSE, &print_reverse},
        {PRINT_UPPER, &print_upper},
        {PRINT_42, &print_42},
    };

    for (int c = 0; c <= 4; c++) {
        if (action == list[c].action) {
            (*list[c].f)(str);
            return;
        }
    }
}