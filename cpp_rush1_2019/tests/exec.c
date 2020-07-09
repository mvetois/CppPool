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

int ex01(void);
int ex02(void);
int ex03(void);
int ex04(void);
int ex05(void);

Test(ex01, 01)
{
    cr_redirect_stdout();
    cr_assert_eq(ex01(), 0);
}

Test(ex02, 01)
{
    cr_redirect_stdout();
    cr_assert_eq(ex02(), 0);
}

Test(ex03, 01)
{
    cr_redirect_stdout();
    cr_assert_eq(ex03(), 0);
}

Test(ex04, 01)
{
    cr_redirect_stdout();
    cr_assert_eq(ex04(), 0);
}

Test(ex05, 01)
{
    cr_redirect_stdout();
    cr_assert_eq(ex05(), 0);
}