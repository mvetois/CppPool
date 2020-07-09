/*
** EPITECH PROJECT, 2020
** CPP Pool D02M
** File description:
** func_ptr
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "func_ptr_enum.h"

typedef void (*f_t)(const char *str);

typedef struct action_func_s {
    action_t action;
    f_t f;
} action_func_t;

void print_normal(const char *str);
void print_reverse(const char *str);
void print_upper(const char *str);
void print_42(const char *str);
void do_action(action_t action, const char *str);