/*
** EPITECH PROJECT, 2020
** CPP Pool D09
** File description:
** Character
*/

#include "Character.hpp"

Character::Character(const std::string &name, int level)
{
    _name = name;
    _level = level;
    _pv = 100;
    _energy = 100;
    _strength = 5;
    _stamina = 5;
    _intelligence = 5;
    _spirit = 5;
    _agility = 5;
    Range = CLOSE;
    std::cout << _name << " Created" << std::endl;
}

const std::string &Character::getName() const
{
    return (_name);
}

int Character::getLvl() const
{
    return (_level);
}

int Character::getPv() const
{
    return (_pv);
}

int Character::getPower() const
{
    return (_energy);
}

int Character::CloseAttack()
{
    if (_energy >= 10) {
        _energy -= 10;
        std::cout << _name << " strikes with a wooden stick" << std::endl;
        return (10 + _strength);
    }
    std::cout << _name << " out of power" << std::endl;
    return (0);
}

void Character::Heal()
{
    _pv += 50;
    if (_pv > 100)
        _pv = 100;
    std::cout << _name << " takes a potion" << std::endl;
}

int Character::RangeAttack()
{
    if (_energy >= 10) {
        _energy -= 10;
        std::cout << _name << " tosses a stone" << std::endl;
        return (5 + _strength);
    }
    std::cout << _name << " out of power" << std::endl;
    return (0);
}

void Character::RestorePower()
{
    _energy = 100;
    std::cout << _name << " eats" << std::endl;
}

void Character::TakeDamage(int damage)
{
    if (_pv > 0) {
        _pv -= damage;
        if (_pv > 0)
            std::cout << _name << " takes " << damage << " damage" << std::endl;
        else
            std::cout << _name << " out of combat" << std::endl;
    } else {
        std::cout << _name << " out of combat" << std::endl;
    }
}
