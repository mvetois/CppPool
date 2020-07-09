/*
** EPITECH PROJECT, 2020
** CPP Pool D09
** File description:
** Warrior
*/

#include "Warrior.hpp"

Warrior::Warrior(const std::string &name, int level) : Character(name, level)
{
    _strength = 12;
    _stamina = 12;
    _intelligence = 6;
    _spirit = 5;
    _agility = 7;
    weapon = "hammer";

    std::cout << "I'm " << _name << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

int Warrior::CloseAttack()
{
    if (_energy >= 30) {
        _energy -= 30;
        std::cout << _name << " strikes with his "<< weapon << std::endl;
        return (20 + _strength);
    }
    std::cout << _name << " out of power" << std::endl;
    return (0);
}

int Warrior::RangeAttack()
{
    if (_energy >= 10) {
        _energy -= 10;
        std::cout << _name << " intercepts" << std::endl;
        Range = CLOSE;
        return (0);
    }
    std::cout << _name << " out of power" << std::endl;
    return (0);
}