/*
** EPITECH PROJECT, 2020
** cpp_rush1_2019
** File description:
** test_char
*/


#include "../char.h"
#include "../new.h"
#include <stdio.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(test_str, test_char)
{
    Object *ta = new(Char, 'a');

    cr_assert_str_eq(str(ta), "<Char (a)>");
    delete(ta);
}

Test(test_addition, test_char)
{
    Object *ta = new(Char, 'a');
    Object *tb = new(Char, '\n');
    Object *tc = addition(ta, tb);

    cr_assert_str_eq(str(tc), "<Char (k)>");
    delete(ta);
    delete(tb);
    delete(tc);
}

Test(test_substraction, test_char)
{
    Object *ta = new(Char, 'k');
    Object *tb = new(Char, '\n');
    Object *tc = subtraction(ta, tb);

    cr_assert_str_eq(str(tc), "<Char (a)>");
    delete(ta);
    delete(tb);
    delete(tc);
}

Test(test_multiply, test_char)
{
    Object *ta = new(Char, 'a');
    Object *tb = new(Char, 'b');
    Object *tc = multiplication(ta, tb);

    cr_assert_str_eq(str(tc), "<Char (\")>");
    delete(ta);
    delete(tb);
    delete(tc);
}

Test(test_divide, test_char)
{
    Object *ta = new(Char, 'd');
    Object *tb = new(Char, '\n');
    Object *tc = division(ta, tb);

    cr_assert_str_eq(str(tc), "<Char (\n)>");
    delete(ta);
    delete(tb);
    delete(tc);
}

Test(test_equal, test_char)
{
    Object *ta = new(Char, 'a');
    Object *tb = new(Char, 'b');
    Object *tc = new(Char, 'a');
    bool r1 = eq(ta, tb);
    bool r2 = eq(ta, tc);

    cr_assert(r1 == 0, "'a' is equal to 'b'\n");
    cr_assert(r2 == 1, "'a' is not equal to 'b'\n");
    delete(ta);
    delete(tb);
    delete(tc);
}

Test(test_greater, test_char)
{
    Object *ta = new(Char, 'a');
    Object *tb = new(Char, 'b');
    bool tc = gt(ta, tb);
    bool td = gt(tb, ta);

    cr_assert(tc == 0, "");
    cr_assert(td == 1, "");
    delete(ta);
    delete(tb);
}

Test(test_lower, test_char)
{
    Object *ta = new(Char, 'a');
    Object *tb = new(Char, 'b');
    bool tc = lt(ta, tb);
    bool td = lt(tb, ta);

    cr_assert(tc == 1, "");
    cr_assert(td == 0, "");
    delete(ta);
    delete(tb);
}