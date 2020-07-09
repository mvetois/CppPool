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
#include "../hospital/SickKoala.hpp"
#include "../hospital/KoalaNurse.hpp"
#include "../hospital/KoalaDoctor.hpp"

int one(void)
{
    SickKoala SickKoala("Koko") ;
    KoalaDoctor a("ok");
    KoalaNurse n(0);
    n.timeCheck();
    n.timeCheck();
    a.timeCheck();
    a.timeCheck();
    SickKoala.poke();
    SickKoala.takeDrug("Mars");
    SickKoala.overDrive("Kreog! Ca boume ?");
    a.diagnose(&SickKoala);
    n.giveDrug(n.readReport("Koko.report"), &SickKoala);
    a.getName();
    n.getID();
    SickKoala.getName();
    n.readReport("Koko.aa");
    n.readReport("test.report");

    return 0;
}

Test(string, assign)
{
    one();
    cr_assert_eq(one(), 0);
}