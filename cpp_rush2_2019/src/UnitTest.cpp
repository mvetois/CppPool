/*
** EPITECH PROJECT, 2020
** CPP Pool Rush2
** File description:
** UnitTest
*/

#include "../include/UnitTest.hpp"

Object **MyUnitTest()
{
    static Object *a[3];
    a[0] = new LittlePony("happy pony");
    a[1] = new Teddy("cuddles");
    a[2] = NULL;
    return (a);
}

Object *MyUnitTest(Object **object)
{
    Toy *t = (Toy *)object[0];
    Box *b = (Box *)object[1];
    GiftPaper *g = (GiftPaper *)object[2];

    b->openMe();
    b->wrapMeThat(t);
    b->closeMe();
    g->wrapMeThat(b);

    return (g);
}