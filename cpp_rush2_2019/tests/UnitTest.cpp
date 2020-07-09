/*
** EPITECH PROJECT, 2020
** CPP Pool D08
** File description:
** one
*/

#include <criterion/criterion.h>
#include "../include/UnitTest.hpp"

Object **init_two(void)
{
    static Object *a[3];
    a[0] = new Toy;
    a[1] = new Box;
    a[2] = new GiftPaper;
    return (a);
}

Test(UnitTest, one)
{
    Object **out = MyUnitTest();

    cr_assert_eq(out[0]->getName(), "happy pony");
    cr_assert_eq(out[1]->getName(), "cuddles");
}

Test(UnitTest, two)
{
    Object **a = init_two();
    Object *out = MyUnitTest(a);

    cr_assert(((Wrap *)out)->getObject() == a[1]);
    cr_assert_eq(a[0]->getName(), "Toy");
    cr_assert_eq(a[1]->getType(), "Box");
    cr_assert_eq(a[1]->getName(), "Box");
    cr_assert_eq(out->getName(), "GiftPaper");
}

Test(TestWrapObj, three)
{
    Object *a = new Object;
    Wrap *b = new Wrap;
    Toy *c = new Toy;
    b->wrapMeThat(c);

    cr_assert(b->getObject() == c);
    b->~Wrap();
    cr_assert(a->getObject() == nullptr);
}

Test(TestDestroyToys, four)
{
    Teddy *t = new Teddy("Teddy");
    LittlePony *l = new LittlePony("Pony");
    cr_assert_eq(t->getName(), "Teddy");
    cr_assert_eq(l->getName(), "Pony");
    t->~Teddy();
    l->~LittlePony();
}