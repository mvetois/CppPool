/*
** EPITECH PROJECT, 2020
** CPP Pool D02M
** File description:
** mem_ptr
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mem_ptr.h"

void add_str(const char *str1, const char *str2, char **res);
void add_str_struct(str_op_t *str_op);

void add_str(const char *str1, const char *str2, char **res)
{
    *res = malloc(strlen(str1) + strlen(str2) + 1);
    strcpy(*res, str1);
    strcat(*res, str2);
}

void add_str_struct(str_op_t *str_op)
{
    add_str(str_op->str1, str_op->str2, &str_op->res);
}