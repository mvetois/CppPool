/*
** EPITECH PROJECT, 2020
** CPP Pool D10
** File description:
** RadScorpion
*/

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : AEnemy(80 ,"RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}

void RadScorpion::takeDamage(int damage) {
    AEnemy::takeDamage(damage);
}