/*
** EPITECH PROJECT, 2020
** CPP Pool D08
** File description:
** Droid
*/

#include "Droid.hpp"

Droid::Droid(std::string const serial)
{
    _serial = serial;
    _energy = 50;
    _status = new std::string ("Standing by");
    std::cout << "Droid '" << _serial << "' Activated" << std::endl;
}

Droid::Droid(Droid const &cp)
{
    _serial = cp._serial;
    _energy = cp._energy;
    _status = cp._status;
    std::cout << "Droid '" << _serial << "' Activated, Memory Dumped" << std::endl;

}

Droid::~Droid()
{
    std::cout << "Droid '" << _serial << "' Destroyed" << std::endl;
}

size_t Droid::getEnergy() const
{
    return (_energy);
}

void Droid::setEnergy(size_t energy)
{
    if (energy <= 100)
        _energy = energy;
    else {
        _energy = 100;
    }
}

size_t Droid::getAttack() const
{
    return (_attack);
}

std::string Droid::getId() const
{
    return (_serial);
}

size_t Droid::getToughness() const
{
    return (_toughness);
}

std::string *Droid::getStatus() const
{
    return (_status);
}

void Droid::setStatus(std::string *status)
{
    _status = status;
}

void Droid::setId(std::string serial)
{
    _serial = serial;
}



Droid &Droid::operator=(Droid const &d)
{
    _energy = d._energy;
    _serial = d._serial;
    _status = d._status;
    return (*this);
}

bool Droid::operator==(Droid const &d) const
{
    return (*_status == *(d._status));
}

bool Droid::operator!=(Droid const &d) const
{
    return!(*this == d);
}

Droid &Droid::operator<<(size_t &energy)
{
    if (_energy < 100) {
        int t = std::min(energy, 100 - _energy);
        _energy += t;
        energy -= t;
    }
    return(*this);
}

std::ostream &operator<<(std::ostream &os, const Droid &d)
{
    return(os << "Droid '" << d.getId() <<  "', " << *d.getStatus() << ", " << d.getEnergy());
}

void Droid::setBattleData(DroidMemory *dm) {
    BattleData = dm;
}

DroidMemory *Droid::getBattleData()
{
    return (BattleData);
}
