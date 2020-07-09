/*
** EPITECH PROJECT, 2020
** CPP Pool Rush2
** File description:
** TestFactory
*/

#include <iostream>
#include <criterion/criterion.h>
#include "../include/SantaFactory.hpp"

Test(TestFactory, one)
{
    SantaFactory f;

    f.BuildGift(3, "NULL");
}

Test(TestFactory, two)
{
    TableRand t;

    t.fillTable();
    t.clearTable();
}