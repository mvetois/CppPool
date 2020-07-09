/*
** EPITECH PROJECT, 2020
** cpp_rush1_2019
** File description:
** test_int
*/


#include "../vertex.h"
#include "../new.h"
#include <stdio.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(test_str, test_vertex)
{
    Object *ta = new(Vertex, 1, -1, 1);

    cr_assert_str_eq(str(ta), "<Vertex (1, -1, 1)>");
    delete(ta);
}

Test(test_addition, test_vertex)
{
    Object *ta = new(Vertex, 1, 1, 1);
    Object *tb = new(Vertex, 2, 2, 1);
    Object *tc = addition(ta, tb);

    cr_assert_str_eq(str(tc), "<Vertex (3, 3, 2)>");
    delete(ta);
    delete(tb);
    delete(tc);
}

Test(test_substraction, test_vertex)
{
    Object *ta = new(Vertex, 1, 1, 1);
    Object *tb = new(Vertex, 2, 2, 1);
    Object *tc = subtraction(ta, tb);

    cr_assert_str_eq(str(tc), "<Vertex (-1, -1, 0)>");
    delete(ta);
    delete(tb);
    delete(tc);
}
