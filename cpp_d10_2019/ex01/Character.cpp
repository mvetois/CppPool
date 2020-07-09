/*
** EPITECH PROJECT, 2020
** CPP Pool D10
** File description:
** Character
*/

#include "Character.hpp"

Character::Character(const std::string &name)
{
    _name = name;
    _ap = 40;
    _weapon = NULL;
}

Character::~Character()
{
}

std::string Character::getName() const
{
    return (_name);
}

int Character::getAP() const
{
    return (_ap);
}

AWeapon *Character::getWeapon() const
{
    return (_weapon);
}

void Character::recoverAP() {
    _ap += 10;
    if (_ap > 40)
        _ap = 40;
}

void Character::equip(AWeapon *weapon)
{
    _weapon = weapon;
}

void Character::attack(AEnemy *enemy)
{
    if (_weapon && enemy) {
        if (_ap < _weapon->getAPCost() || enemy->getHP() <= 0)
            return;
        std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
        _weapon->attack();
        enemy->takeDamage(_weapon->getDamage());
        _ap -= _weapon->getAPCost();
        if (enemy->getHP() <= 0)
            delete enemy;
    }
}

std::ostream& operator<<(std::ostream &os, Character const &c) {
    if (c.getWeapon())
        return (os << c.getName() << " has " << c.getAP() << " AP and wields a " << c.getWeapon()->getName() << std::endl);
    return (os << c.getName() << " has " << c.getAP() << " AP and is unarmed" << std::endl);
}