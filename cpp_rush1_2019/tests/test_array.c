/*
** EPITECH PROJECT, 2020
** cpp_rush1_2019
** File description:
** test_array
*/

#include "../array.h"
#include "../int.h"
#include "../new.h"
#include <stdio.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(test_getitem, test_array)
{
    Object *ta = new(Array, 10, Int, 0);
    Object *tb = getitem(ta, 3);

    cr_assert_str_eq(str(tb), "<Int (0)>");
    delete(ta);
}

Test(test_setitem, test_array)
{
    Object *ta = new(Array, 10, Int, 0);
    setitem(ta, 3, 1);
    Object *tb = getitem(ta, 3);

    cr_assert_str_eq(str(tb), "<Int (1)>");
    delete(ta);
}

Test(test_len, test_array)
{
    Object *ta = new(Array, 10, Int, 0);

    cr_assert(len(ta) == 10, "");
    delete(ta);
}

Test(test_begin_value, test_array)
{
    Object *ta = new(Array, 10, Int, 0);
    Object *tb = begin(ta);
    Object *tc = getval(tb);

    cr_assert_str_eq(str(tc), "<Int (0)>");
    delete(ta);
    delete(tb);
}

Test(test_begin_end_lt, test_array)
{
    Object  *array = new(Array, 10, Int, 0);
    Object  *it = begin(array);
    Object  *it_end = end(array);

    while (lt(it, it_end)) {
        setval(it, 10);
        cr_assert_str_eq(str(getval(it)), "<Int (10)>");
        incr(it);
    }
    delete(it);
    delete(it_end);
    delete(array);
}

Test(test_equal, test_array)
{
    Object *ta = new(Array, 10, Int, 0);
    Object *tb = begin(ta);
    Object *tc = begin(ta);
    incr(tc);

    cr_assert(eq(tb, tc) == 0, "");
    cr_assert(eq(tc, tb) == 0, "");
    delete(ta);
    delete(tb);
    delete(tc);
}

Test(test_greater, test_array)
{
    Object *ta = new(Array, 10, Int, 0);
    Object *tb = begin(ta);
    Object *tc = new(Array, 10, Int, 1);
    Object *td = begin(tc);

    cr_assert(gt(tb, td) == 0, "");
    cr_assert(gt(td, tb) == 0, "");
    delete(ta);
    delete(tb);
    delete(tc);
    delete(td);
}

Test(test_lower, test_array)
{
    Object *ta = new(Array, 10, Int, 0);
    Object *tb = begin(ta);
    Object *tc = new(Array, 10, Int, 1);
    Object *td = begin(tc);

    cr_assert(lt(tb, td) == 0, "");
    cr_assert(lt(td, tb) == 0, "");
    delete(ta);
    delete(tb);
    delete(tc);
    delete(td);
}