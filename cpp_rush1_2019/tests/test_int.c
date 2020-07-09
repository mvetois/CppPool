/*
** EPITECH PROJECT, 2020
** cpp_rush1_2019
** File description:
** test_int
*/


#include "../int.h"
#include "../new.h"
#include <stdio.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(test_str, test_int)
{
    Object *ta = new(Int, 1);

    cr_assert_str_eq(str(ta), "<Int (1)>");
    delete(ta);
}

Test(test_addition, test_int)
{
    Object *ta = new(Int, 1);
    Object *tb = new(Int, 1);
    Object *tc = addition(ta, tb);

    cr_assert_str_eq(str(tc), "<Int (2)>");
    delete(ta);
    delete(tb);
    delete(tc);
}

Test(test_substraction, test_int)
{
    Object *ta = new(Int, 2);
    Object *tb = new(Int, 1);
    Object *tc = subtraction(ta, tb);

    cr_assert_str_eq(str(tc), "<Int (1)>");
    delete(ta);
    delete(tb);
    delete(tc);
}

Test(test_multiply, test_int)
{
    Object *ta = new(Int, 2);
    Object *tb = new(Int, 2);
    Object *tc = multiplication(ta, tb);

    cr_assert_str_eq(str(tc), "<Int (4)>");
    delete(ta);
    delete(tb);
    delete(tc);
}

Test(test_divide, test_int)
{
    Object *ta = new(Int, 4);
    Object *tb = new(Int, 2);
    Object *tc = division(ta, tb);

    cr_assert_str_eq(str(tc), "<Int (2)>");
    delete(ta);
    delete(tb);
    delete(tc);
}

Test(test_equal, test_int)
{
    Object *ta = new(Int, 1);
    Object *tb = new(Int, 2);
    Object *tc = new(Int, 1);
    bool r1 = eq(ta, tb);
    bool r2 = eq(ta, tc);

    cr_assert(r1 == 0, "'1' is equal to '1'\n");
    cr_assert(r2 == 1, "'2' is not equal to '1'\n");
    delete(ta);
    delete(tb);
    delete(tc);
}

Test(test_greater, test_int)
{
    Object *ta = new(Int, 1);
    Object *tb = new(Int, 2);
    bool tc = gt(ta, tb);
    bool td = gt(tb, ta);

    cr_assert(tc == 0, "");
    cr_assert(td == 1, "");
    delete(ta);
    delete(tb);
}

Test(test_lower, test_int)
{
    Object *ta = new(Int, 1);
    Object *tb = new(Int, 3);
    bool tc = lt(ta, tb);
    bool td = lt(tb, ta);

    cr_assert(tc == 1, "");
    cr_assert(td == 0, "");
    delete(ta);
    delete(tb);
}