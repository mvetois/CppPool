/*
** EPITECH PROJECT, 2020
** CPP Pool D10
** File description:
** AWeapon
*/

#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apcost, int damage)
{
    _name = name;
    _ap = apcost;
    _damage = damage;
}

AWeapon::~AWeapon()
{
}

std::string AWeapon::getName() const
{
    return (_name);
}

int AWeapon::getAPCost() const
{
    return (_ap);
}

int AWeapon::getDamage() const
{
    return (_damage);
}