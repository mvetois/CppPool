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

double double_list_get_elem_at_back(double_list_t list)
{
    if (list == NULL)
        return (0);
    while (list->next != NULL)
        list = list->next;
    return (list->value);
}

double double_list_get_elem_at_position(double_list_t list,
unsigned int position)
{
    unsigned int count = 0;
    if (list == NULL)
        return (0);
    while (count != position && list->next != NULL) {
        list = list->next;
        count++;
    }
    return (list->value);
}

doublelist_node_t *double_list_get_first_node_with_value(double_list_t list,
double value)
{
    if (list == NULL)
        return (NULL);
    if (list->value == value)
        return (list);
    while (list->next != NULL) {
        if (list->value == value)
            return (list);
        list = list->next;
    }
    return (NULL);
}