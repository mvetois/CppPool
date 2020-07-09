/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** tests_01
*/

#include "../new.h"
#include "../player.h"
#include "../point.h"
#include "../vertex.h"
#include "../int.h"
#include "../float.h"
#include "../char.h"
#include "../array.h"
#include <stdio.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

int ex01(void)
{
    Object *player = new(Player);

    delete(player);
    return (0);
}

int ex02(void)
{
    Object  *point = new(Point, 42, -42);
    Object  *vertex = new(Vertex, 0, 1, 2);

    delete(point);
    delete(vertex);
    return (0);
}

int ex03(void)
{
    Object *p1 = new(Point, 12, 13);
    Object *p2 = new(Point, 2, 2);
    Object *v1 = new(Vertex, 1, 2, 3);
    Object *v2 = new(Vertex, 4, 5, 6);

    delete(p1);
    delete(p2);
    delete(v1);
    delete(v2);
    return (0);
}

int ex04(void)
{
    Object *p1 = new(Int, 12);
    Object *p2 = new(Float, 5.2);
    Object *p3 = new(Char, "a");

    delete(p1);
    delete(p2);
    delete(p3);
    return (0);
}

int ex05(void)
{
    Object  *array = new(Array, 10, Int, 0);
    Object  *it = begin(array);
    Object  *it_end = end(array);

    printf("array size: %zu\n", len(array));
    setitem(array, 5, 12);
    setitem(array, 6, 13);
    while (lt(it, it_end))
    {
        printf("%s\n", str(getval(it)));
        incr(it);
    }
    delete(it);
    delete(it_end);
    delete(array);
    return (0);
}