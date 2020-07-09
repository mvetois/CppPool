/*
** EPITECH PROJECT, 2020
** cpp_rush1_2019
** File description:
** test_float
*/

#include "../float.h"
#include "../new.h"
#include <stdio.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(test_str, test_float)
{
    Object *ta = new(Float, 5.f);

    cr_assert_str_eq(str(ta), "<Float (5.000000)>");
    delete(ta);
}

Test(test_addition, test_float)
{
    Object *ta = new(Float, 5.f);
    Object *tb = new(Float, 6.f);
    Object *tc = addition(ta, tb);

    cr_assert_str_eq(str(tc), "<Float (11.000000)>");
    delete(ta);
    delete(tb);
    delete(tc);
}

Test(test_substraction, test_float)
{
    Object *ta = new(Float, 5.f);
    Object *tb = new(Float, 6.f);
    Object *tc = subtraction(ta, tb);

    cr_assert_str_eq(str(tc), "<Float (-1.000000)>");
    delete(ta);
    delete(tb);
    delete(tc);
}

Test(test_multiply, test_float)
{
    Object *ta = new(Float, 5.f);
    Object *tb = new(Float, 2.f);
    Object *tc = multiplication(ta, tb);

    cr_assert_str_eq(str(tc), "<Float (10.000000)>");
    delete(ta);
    delete(tb);
    delete(tc);
}

Test(test_divide, test_float)
{
    Object *ta = new(Float, 2.f);
    Object *tb = new(Float, 6.f);
    Object *tc = division(tb, ta);

    cr_assert_str_eq(str(tc), "<Float (3.000000)>");
    delete(ta);
    delete(tb);
    delete(tc);
}

Test(test_equal, test_float)
{
    Object *ta = new(Float, 5.f);
    Object *tb = new(Float, 6.f);
    Object *tc = new(Float, 5.f);
    bool r1 = eq(ta, tb);
    bool r2 = eq(ta, tc);

    cr_assert(r1 == 0, "'a' is equal to 'b'\n");
    cr_assert(r2 == 1, "'a' is not equal to 'b'\n");
    delete(ta);
    delete(tb);
    delete(tc);
}

Test(test_greater, test_float)
{
    Object *ta = new(Float, 5.f);
    Object *tb = new(Float, 6.f);
    bool tc = gt(ta, tb);
    bool td = gt(tb, ta);

    cr_assert(tc == 0, "");
    cr_assert(td == 1, "");
    delete(ta);
    delete(tb);
}

Test(test_lower, test_float)
{
    Object *ta = new(Float, 5.f);
    Object *tb = new(Float, 6.f);
    bool tc = lt(ta, tb);
    bool td = lt(tb, ta);

    cr_assert(tc == 1, "");
    cr_assert(td == 0, "");
    delete(ta);
    delete(tb);
}