/*
** EPITECH PROJECT, 2020
** CPP Pool D10
** File description:
** AEnemy
*/

#include "AEnemy.hpp"

AEnemy::AEnemy(int hp, const std::string &type)
{
    _type = type;
    _hp = hp;
}

AEnemy::~AEnemy()
{
}

std::string AEnemy::getType() const
{
    return (_type);
}

int AEnemy::getHP() const
{
    return (_hp);
}


void AEnemy::takeDamage(int damage) {
    if (damage > 0)
        _hp -= damage;
}