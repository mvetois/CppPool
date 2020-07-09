/*
** EPITECH PROJECT, 2020
** CPP Pool D07M
** File description:
** Borg
*/

#include "Borg.hpp"

Borg::Ship::Ship()
{
    _maxWarp = 9;
    _side = 300;
    std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally."<< std::endl <<"Your biological characteristics and technologies will be assimilated." <<std::endl << "Resistance is futile." << std::endl;
    _home = UNICOMPLEX;
    _location = _home;
    _shield = 100;
    _repair = 3;
}

Borg::Ship::Ship(int weaponFrequency)
{
    _maxWarp = 9;
    _side = 300;
    std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally."<< std::endl <<"Your biological characteristics and technologies will be assimilated." <<std::endl << "Resistance is futile." << std::endl;
    _home = UNICOMPLEX;
    _location = _home;
    _repair = 3;
    _weaponFrequency = weaponFrequency;
    _shield = 100;
}

Borg::Ship::Ship(int weaponFrequency, short repair)
{
    _maxWarp = 9;
    _side = 300;
    std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally."<< std::endl <<"Your biological characteristics and technologies will be assimilated." <<std::endl << "Resistance is futile." << std::endl;
    _home = UNICOMPLEX;
    _location = _home;
    _repair = repair;
    _weaponFrequency = weaponFrequency;
    _shield = 100;
}

void Borg::Ship::setupCore(WarpSystem::Core *core)
{
    _core = core;
}

void Borg::Ship::checkCore()
{
    if (_core->checkReactor()->isStable() == true)
        std::cout << "Everything is in order." << std::endl;
    else
        std::cout << "Critical failure imminent." << std::endl;
}

bool Borg::Ship::move(int warp, Destination d)
{
    if (warp > _maxWarp || d == _location || _core->checkReactor()->isStable() == false)
        return (false);
    _location = d;
    return (true);
}

bool Borg::Ship::move(int warp)
{
    if (warp > _maxWarp || _core->checkReactor()->isStable() == false)
        return (false);
    _location = _home;
    return (true);
}

bool Borg::Ship::move(Destination d)
{
    if (d == _location || _core->checkReactor()->isStable() == false)
        return (false);
    _location = d;
    return (true);
}

bool Borg::Ship::move()
{
    if (_core->checkReactor()->isStable() == false)
        return (false);
    _location = _home;
    return (true);
}

int Borg::Ship::getShield()
{
    return (_shield);
}

void Borg::Ship::setShield(int shield)
{
    _shield = shield;
}

int Borg::Ship::getWeaponFrequency()
{
    return (_weaponFrequency);
}

void Borg::Ship::setWeaponFrequency(int frequency)
{
    _weaponFrequency = frequency;
}

short Borg::Ship::getRepair()
{
    return (_repair);
}

void Borg::Ship::setRepair(short repair)
{
    _repair = repair;
}

void Borg::Ship::fire(Federation::Starfleet::Ship *target)
{
    target->setShield(_weaponFrequency);
    std::cout << "Firing on target with " << _weaponFrequency << "GW frequency." << std::endl;
}

void Borg::Ship::fire(Federation::Ship *target)
{
    target->getCore()->checkReactor()->setStability(false);
    std::cout << "Firing on target with " << _weaponFrequency << "GW frequency." << std::endl;
}

void Borg::Ship::repair()
{
    if (_repair <= 0) {
        std::cout << "Energy cells depleted, shield weakening." << std::endl;
    } else {
        std::cout << "Begin shield re-initalisation... Done. Awaiting futher instructions." << std::endl;
        _shield = 100;
    }
}

void Borg::Ship::setShieldBorg(int shield)
{
    _shield -= shield;
}