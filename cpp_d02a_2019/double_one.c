/*
** EPITECH PROJECT, 2020
** CPP Pool D02A
** File description:
** double_one
*/

#include "double_list.h"
#include <stdlib.h>
#include <stdio.h>

unsigned int double_list_get_size(double_list_t list);
bool double_list_is_empty(double_list_t list);
void double_list_dump(double_list_t list);
bool double_list_add_elem_at_front(double_list_t *front_ptr, double elem);
bool double_list_add_elem_at_back(double_list_t *front_ptr, double elem);
bool double_list_add_elem_at_position(double_list_t *front_ptr, double elem,
unsigned int position);
bool double_list_del_elem_at_front(double_list_t *front_ptr);
bool double_list_del_elem_at_back(double_list_t *front_ptr);
bool double_list_del_elem_at_position(double_list_t *front_ptr,
unsigned int position);
double double_list_get_elem_at_front(double_list_t list);
double double_list_get_elem_at_back(double_list_t list);
double double_list_get_elem_at_position(double_list_t list,
unsigned int position);
doublelist_node_t *double_list_get_first_node_with_value(double_list_t list,
double value);

unsigned int double_list_get_size(double_list_t list)
{
    int count = 0;

    if (list != NULL)
        count++;
    while (list->next != NULL) {
        count++;
        list = list->next;
    }
    return (count);
}

bool double_list_is_empty(double_list_t list)
{
    if (list == NULL)
        return (true);
    return (false);
}

void double_list_dump(double_list_t list)
{
    while (list->next != NULL) {
        printf("%f\n", list->value);
        list = list->next;
    }
    printf("%f\n", list->value);
}

bool double_list_add_elem_at_front(double_list_t *front_ptr, double elem)
{
    double_list_t list = malloc(sizeof(double_list_t) * 2);
    if (list == NULL)
        return (false);
    list->value = elem;
    list->next = (*front_ptr);
    *front_ptr = list;
    return (true);
}

bool double_list_add_elem_at_back(double_list_t *front_ptr, double elem)
{
    double_list_t list = malloc(sizeof(double_list_t) * 2);
    double_list_t a = *front_ptr;

    if (list == NULL)
        return (false);
    list->value = elem;
    list->next = NULL;

    if (a == NULL)
        *front_ptr = list;
    else {
        a = *front_ptr;
        while (a->next != NULL)
            a = a->next;
        a->next = list;
    }
    return (true);
}