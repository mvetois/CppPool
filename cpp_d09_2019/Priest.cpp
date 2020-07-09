/*
** EPITECH PROJECT, 2020
** CPP Pool D09
** File description:
** Priest
*/

#include "Priest.hpp"
#include "Character.hpp"

Priest::Priest(const std::string &name, int level) : Character(name, level), Mage(name, level)
{
    _strength = 4;
    _stamina = 4;
    _intelligence = 42;
    _spirit = 21;
    _agility = 2;

    std::cout << _name << " enters in the order" << std::endl;
}

int Priest::CloseAttack()
{
    if (_energy >= 10) {
        _energy -= 10;
        std::cout << _name << " uses a spirit explosion" << std::endl;
        return (10 + _spirit);
    }
    std::cout << _name << " out of power" << std::endl;
    return (0);
}

void Priest::Heal()
{
    if (_energy >= 10) {
        _energy -= 10;
        _pv += 70;
        std::cout << _name << " casts a little heal spell" << std::endl;
    }
    if (_pv > 100)
        _pv = 100;
}