/*
** EPITECH PROJECT, 2020
** CPP Pool D09
** File description:
** Paladin
*/

#include "Paladin.hpp"
#include "Priest.hpp"
#include "Character.hpp"

Paladin::Paladin(const std::string &name, int level) : Character(name, level), Warrior(name, level),Priest(name, level)
{
    _strength = 9;
    _stamina = 10;
    _intelligence = 10;
    _spirit = 10;
    _agility = 2;

    std::cout << "the light falls on " << _name << std::endl;
}

int Paladin::Intercept() {
    return (Warrior::RangeAttack());
}