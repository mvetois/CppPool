/*
** EPITECH PROJECT, 2020
** CPP Pool D03
** File description:
** my_string
*/

#include "string.h"

static void init_bis(string_t *this)
{
    this->empty = &empty;
    this->find_c = &find_c;
    this->find_s = &find_s;
    this->insert_c = &insert_c;
    this->insert_s = &insert_s;
    this->to_int = &to_int;
    this->split_c = &split_c;
    this->split_s = &split_s;
}

void string_init(string_t *this, const char *s)
{
    this->str = malloc(sizeof(char) * (my_strlen(s) + 1));
    this->str = my_strcpy(this->str, s);
    this->append_s = &append_s;
    this->append_c = &append_c;
    this->assign_c = &assign_c;
    this->assign_s = &assign_s;
    this->at = &at;
    this->clear = &clear;
    this->size = &size;
    this->compare_c = &compare_c;
    this->compare_s = &compare_s;
    this->copy = &copy;
    this->c_str = &c_str;
    init_bis(this);
}

void string_destroy(string_t *this)
{
    if (this == NULL)
        return;
    if (this->str == NULL)
        return;
    free(this->str);
}