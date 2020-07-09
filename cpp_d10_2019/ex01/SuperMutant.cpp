/*
** EPITECH PROJECT, 2020
** CPP Pool D10
** File description:
** SuperMutant
*/

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : AEnemy(170 ,"Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int damage) {
    AEnemy::takeDamage(damage - 3);
}