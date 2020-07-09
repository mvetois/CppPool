/*
** EPITECH PROJECT, 2020
** cpp_rush1_2019
** File description:
** test_int
*/


#include "../point.h"
#include "../new.h"
#include <stdio.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(test_str, test_point)
{
    Object *ta = new(Point, 1, -1);

    cr_assert_str_eq(str(ta), "<Point (1, -1)>");
    delete(ta);
}

Test(test_addition, test_point)
{
    Object *ta = new(Point, 1, 1);
    Object *tb = new(Point, 2, 2);
    Object *tc = addition(ta, tb);

    cr_assert_str_eq(str(tc), "<Point (3, 3)>");
    delete(ta);
    delete(tb);
    delete(tc);
}

Test(test_substraction, test_point)
{
    Object *ta = new(Point, 1, 1);
    Object *tb = new(Point, 2, 2);
    Object *tc = subtraction(ta, tb);

    cr_assert_str_eq(str(tc), "<Point (-1, -1)>");
    delete(ta);
    delete(tb);
    delete(tc);
}
