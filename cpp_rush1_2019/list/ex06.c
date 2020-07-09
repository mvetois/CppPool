/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 05
*/

#include <stdio.h>
#include "../int.h"
#include "../new.h"
#include "list.h"

int         main(void)
{
    Object  *list = new(List, Int);
    Object  *it = NULL;
    Object  *it_end = end(list);
    Object *test = new(Int, 12);
    Object  *front = NULL;
    Object  *back = NULL;
    char *to_print = NULL;

    printf("New list\nlist size: %zu\n\n", len(list));
    pushfront(list, 2);
    pushfront(list, 4);
    pushfront(list, 8);
    pushfront(list, 12);
    pushfront(list, 13);
    pushback(list, 1);
    printf("Add 6 elements\nlist size: %zu\n\n", len(list));
    it = begin(list);
    printf("value of eatch elements :\n");
    while (!eq(it, it_end))
    {
        if (eq(getval(it), test)) {
            setval(it, 46);
        }
        to_print = str(getval(it));
        printf("%s\n", to_print);
        free(to_print);
        incr(it);
    }
    front = popfront(list);
    back = popback(list);
    to_print = str(front);
    printf("\nFront element of list: %s\n", to_print);
    free(to_print);
    to_print = str(back);
    printf("Back element of list: %s\n", to_print);
    free(to_print);
    printf("\nDelete 2 elements\nlist size: %zu\n\n", len(list));
    printf("value of eatch elements :\n");
    delete(it);
    it = begin(list);
    while (!eq(it, it_end))
    {
        to_print = str(getval(it));
        printf("%s\n", to_print);
        free(to_print);
        incr(it);
    }
    delete(it);
    delete(it_end);
    delete(list);
    delete(test);
    delete(front);
    delete(back);
    return (0);
}

