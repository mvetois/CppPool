/*
** EPITECH PROJECT, 2020
** CPP Pool D09
** File description:
** Mage
*/

#include "Mage.hpp"

Mage::Mage(const std::string &name, int level) : Character(name, level)
{
    _strength = 6;
    _stamina = 6;
    _intelligence = 12;
    _spirit = 11;
    _agility = 7;

    std::cout << _name << " teleported" << std::endl;
}

int Mage::CloseAttack()
{
    if (_energy >= 10) {
        _energy -= 10;
        std::cout << _name << " blinks" << std::endl;
    } else
        std::cout << _name << " out of power" << std::endl;
    Range = Character::RANGE;
    return (0);
}

int Mage::RangeAttack()
{
    if (_energy >= 25) {
        _energy -= 25;
        std::cout << _name << " launches a fire ball" << std::endl;
        return (20 + _spirit);
    }
    std::cout << _name << " out of power" << std::endl;
    return (0);
}

void Mage::RestorePower()
{
    _energy += 50 + _intelligence;
    if (_energy > 100)
        _energy = 100;
    std::cout << _name << " takes a mana potion" << std::endl;
}