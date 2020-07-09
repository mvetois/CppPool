/*
** EPITECH PROJECT, 2020
** CPP Pool Rush2
** File description:
** TestConvoyer
*/

#include <criterion/criterion.h>
#include "../include/ConveyorBelt.hpp"
#include "../include/PapaXmasConveyorBelt.hpp"
#include "../include/Box.hpp"
#include "../include/GiftPaper.hpp"

Test(TestConvoyer, one)
{
    ConveyorBelt * c = new ConveyorBelt;
    Box *b = new Box;
    GiftPaper *g = new GiftPaper;

    cr_assert(c->isEmpty() == true);
    cr_assert(c->putObject(b) == true);
    cr_assert(c->putObject(b) == false);
    cr_assert(c->isEmpty() == false);
    c->IN();
    c->getObject();
    cr_assert(c->isEmpty() == true);
    for (int i = 0; i < 10; i++) {
        cr_assert(c->isEmpty() == true);
        c->IN();
        cr_assert(c->isEmpty() == false);
        c->getObject();
        cr_assert(c->isEmpty() == true);
    }
    cr_assert(c->putObject(g) == true);
    c->OUT();
}

Test(TestConvoyer, two)
{
    PapaXmasConveyorBelt * c = new PapaXmasConveyorBelt;
    Box *b = new Box;
    GiftPaper *g = new GiftPaper;

    cr_assert(c->isEmpty() == true);
    cr_assert(c->putObject(b) == true);
    cr_assert(c->putObject(b) == false);
    cr_assert(c->isEmpty() == false);
    c->IN();
    c->getObject();
    cr_assert(c->isEmpty() == true);
    for (int i = 0; i < 10; i++) {
        cr_assert(c->isEmpty() == true);
        c->IN();
        cr_assert(c->isEmpty() == false);
        c->getObject();
        cr_assert(c->isEmpty() == true);
    }
    cr_assert(c->putObject(g) == true);
    c->OUT();
}