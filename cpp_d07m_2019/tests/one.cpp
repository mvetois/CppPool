/*
** EPITECH PROJECT, 2020
** CPP Pool D06
** File description:
** one
*/

#include  <criterion/criterion.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include "../Federation.hpp"
#include "../WarpSystem.hpp"
#include "../Borg.hpp"


int one(void)
{
    Federation::Starfleet::Ship UssKreog(289, 132, "Kreog", 6);
    Federation::Ship Independent(150, 230, "Greok");
    WarpSystem::QuantumReactor QR;
    WarpSystem::QuantumReactor QR2;
    WarpSystem::Core core(&QR);
    WarpSystem::Core core2(&QR2);
    UssKreog.setupCore(&core);
    UssKreog.checkCore();
    Independent.setupCore(&core2);
    Independent.checkCore();
    QR.setStability(false);
    QR2.setStability(false);
    UssKreog.checkCore();
    Independent.checkCore();
    return (0);
}

int two(void)
{
    Federation::Starfleet::Ship UssKreog(289, 132, "Kreog", 6);
    Federation::Starfleet::Captain James("James T. Kirk");
    Federation::Starfleet::Ensign Ensign("Pavel Chekov");
    WarpSystem::QuantumReactor QR;
    WarpSystem::QuantumReactor QR2;
    WarpSystem::QuantumReactor q;
    q.setStability(false);
    WarpSystem::Core core(&QR);
    WarpSystem::Core core2(&QR2);
    WarpSystem::Core aze(&q);
    UssKreog.setupCore(&core);
    UssKreog.checkCore();
    UssKreog.promote(&James);
    Borg::Ship Cube;
    Borg::Ship c2;
    c2.setupCore(&aze);
    James.setAge(12);
    James.getAge();
    Cube.setupCore(&core2);
    Cube.checkCore();
    c2.checkCore();
    return (0);
}

int three(void)
{
    Federation::Starfleet::Ship a(289, 132, "Kreog", 6);
    Federation::Ship b(123, 23, "ok");
    Borg::Ship c;
    WarpSystem::QuantumReactor aa;
    WarpSystem::QuantumReactor bb;
    WarpSystem::QuantumReactor cc;
    WarpSystem::Core aaa(&aa);
    WarpSystem::Core bbb(&bb);
    WarpSystem::Core ccc(&cc);
    a.setupCore(&aaa);
    b.setupCore(&bbb);
    c.setupCore(&ccc);
    a.move(VULCAN);
    a.move(VULCAN);
    a.move(1);
    a.move(234);
    a.move(1, UNICOMPLEX);
    a.move(234, UNICOMPLEX);
    a.move();
    aa.setStability(false);
    a.move();
    b.move(EARTH);
    b.move(EARTH);
    b.move(234);
    b.move(1);
    b.move(234, UNICOMPLEX);
    b.move(1, UNICOMPLEX);
    b.move();
    bb.setStability(false);
    b.move();
    c.move(EARTH);
    c.move(EARTH);
    c.move(1);
    c.move(233);
    c.move(1, VULCAN);
    c.move(1, VULCAN);
    c.move();
    cc.setStability(false);
    c.move();
    return (0);
}

Test(one, one)
{
    one();
    cr_assert_eq(one(), 0);
}

Test(two, two)
{
    two();
    cr_assert_eq(two(), 0);
}

Test(three, three)
{
    three();
    cr_assert_eq(three(), 0);
}