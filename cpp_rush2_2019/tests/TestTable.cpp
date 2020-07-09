/*
** EPITECH PROJECT, 2020
** CPP Pool Rush2
** File description:
** TestTable
*/

#include <criterion/criterion.h>
#include "../include/Table.hpp"
#include "../include/PapaXmasTable.hpp"
#include "../include/Box.hpp"

Test(TestTable, one)
{
    Table *t = new Table();
    Box *b[11];

    for (int i = 0; i < 11; i++)
        b[i] = new Box;
    cr_assert(t->isFull() == false);
    cr_assert(t->take(12) == nullptr);
    cr_assert(t->take(1) == nullptr);
    cr_assert(t->put(b[0]) == true);
    cr_assert(t->put(b[1], 0) == false);
    cr_assert(t->put(b[1], 1) == true);
    cr_assert(t->look());
    for (int i = 2; i < 10; i++)
        cr_assert(t->put(b[i], i) == true);
    cr_assert(t->put(b[10]) == false);
    cr_assert(t->isFull() == true);
    t->~Table();
}

Test(TestTable, two)
{
    PapaXmasTable *t = new PapaXmasTable();
    Box *b[11];

    for (int i = 0; i < 11; i++)
        b[i] = new Box;
    cr_assert(t->isFull() == false);
    cr_assert(t->take(12) == nullptr);
    cr_assert(t->take(1) == nullptr);
    cr_assert(t->put(b[0]) == true);
    cr_assert(t->put(b[1], 0) == false);
    cr_assert(t->put(b[1], 1) == true);
    cr_assert(t->look());
    for (int i = 2; i < 10; i++)
        cr_assert(t->put(b[i], i) == true);
    cr_assert(t->put(b[10]) == false);
    cr_assert(t->isFull() == true);
    t->~PapaXmasTable();
}