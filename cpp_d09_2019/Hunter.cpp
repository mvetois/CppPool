/*
** EPITECH PROJECT, 2020
** CPP Pool D09
** File description:
** Hunter
*/

#include "Hunter.hpp"
#include "Character.hpp"

Hunter::Hunter(const std::string &name, int level) : Character(name, level), Warrior(name, level)
{
    _strength = 9;
    _stamina = 9;
    _intelligence = 5;
    _spirit = 6;
    _agility = 25;
    weapon = "sword";

    std::cout << _name << " is born from a tree" << std::endl;
}

int Hunter::RangeAttack()
{
    if (_energy >= 25) {
        _energy -= 25;
        std::cout << _name << " uses his bow" << std::endl;
        return (20 + _agility);
    }
    std::cout << _name << " out of power" << std::endl;
    return (0);
}

void Hunter::RestorePower()
{
    _energy = 100;
    std::cout << _name << " meditates" << std::endl;
}