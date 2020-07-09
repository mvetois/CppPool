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

bool double_list_add_elem_at_position(double_list_t *front_ptr, double elem,
unsigned int position)
{
    unsigned int count = 0;
    double_list_t list = malloc(sizeof(double_list_t) * 2);
    double_list_t a = *front_ptr;

    if (list == NULL || a == NULL)
        return (false);
    list->value = elem;
    list->next = NULL;
    if (position == 0)
        return double_list_add_elem_at_front(front_ptr, elem);
    a = *front_ptr;
    while (count + 1 != position && a->next != NULL) {
        a = a->next;
        count++;
    }
    list->next = a->next;
    a->next = list;
    return (true);
}

bool double_list_del_elem_at_front(double_list_t *front_ptr)
{
    double_list_t list = malloc(sizeof(double_list_t) * 2);

    if (front_ptr == NULL || list == NULL)
        return (false);
    list = *front_ptr;
    *front_ptr = list->next;
    return (true);
}

bool double_list_del_elem_at_back(double_list_t *front_ptr)
{
    int count = 0;
    double_list_t list = malloc(sizeof(double_list_t) * 2);

    if (front_ptr == NULL || list == NULL)
        return (false);
    list = *front_ptr;
    while (list->next != NULL) {
        count++;
        list = list->next;
    }
    list = *front_ptr;
    for (int i = 0; i + 1 != count; i++) {
        list = list->next;
    }
    list->next = NULL;
    return (true);
}

bool double_list_del_elem_at_position(double_list_t *front_ptr,
unsigned int position)
{
    double_list_t list = malloc(sizeof(double_list_t) * 2);

    if (front_ptr == NULL || list == NULL)
        return (false);
    list = *front_ptr;
    if (position > double_list_get_size(list))
        return (false);
    for (int i = 0; i + 1 != position; i++) {
        list = list->next;
    }
    list->next = (list->next)->next;
    return (true);
}

double double_list_get_elem_at_front(double_list_t list)
{
    if (list == NULL)
        return (0);
    return (list->value);
}