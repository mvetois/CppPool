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

Test(test_str, test_new_00)
{
    delete(NULL);
}

Test(test_str, test_new_02)
{
    new(NULL);
}