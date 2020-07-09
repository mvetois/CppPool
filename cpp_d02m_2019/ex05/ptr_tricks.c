/*
** EPITECH PROJECT, 2020
** CPP Pool D02M
** File description:
** ptr_tricks
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "ptr_tricks.h"

int get_array_nb_elem(const int *ptr1, const int *ptr2);
whatever_t *get_struct_ptr(const int *member_ptr);

int get_array_nb_elem(const int *ptr1, const int *ptr2)
{
    return (ptr2 - ptr1);
}

whatever_t *get_struct_ptr(const int *member_ptr)
{
    whatever_t base;
    return (void *) member_ptr - ((void *) &base.member - (void *) &base);
}