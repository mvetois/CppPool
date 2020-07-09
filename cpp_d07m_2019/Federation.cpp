/*
** EPITECH PROJECT, 2020
** CPP Pool D07m
** File description:
** Federation
*/

#include "Federation.hpp"
#include "WarpSystem.hpp"

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp)
{
    _length = length;
    _width = width;
    _name = name;
    _maxWarp = maxWarp;
    std::cout << "The ship USS " << _name << " has been finished." << std::endl;
    std::cout << "It is " << _length << " m in length and " << _width << " m in width." << std::endl;
    std::cout << "It can go to Warp " << _maxWarp << "!" << std::endl;
    _home = EARTH;
    _location = _home;
    _photonTorpedo = 0;
}

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp, int torpedo)
{
    _length = length;
    _width = width;
    _name = name;
    _maxWarp = maxWarp;
    std::cout << "The ship USS " << _name << " has been finished." << std::endl;
    std::cout << "It is " << _length << " m in length and " << _width << " m in width." << std::endl;
    std::cout << "It can go to Warp " << _maxWarp << "!" << std::endl;
    _home = EARTH;
    _location = _home;
    _photonTorpedo = torpedo;
    std::cout << "Weapons are set: " << _photonTorpedo << " torpedoes ready." << std::endl;
}

Federation::Starfleet::Ship::Ship()
{
    _length = 289;
    _width = 123;
    _name = "Entreprise";
    _maxWarp = 6;
    std::cout << "The ship USS " << _name << " has been finished." << std::endl;
    std::cout << "It is " << _length << " m in length and " << _width << " m in width." << std::endl;
    std::cout << "It can go to Warp " << _maxWarp << "!" << std::endl;
    _home = EARTH;
    _location = _home;
    _photonTorpedo = 0;
}

void Federation::Starfleet::Ship::fire(Borg::Ship *target)
{
    int torpedo = 1;

    if (_photonTorpedo - torpedo == 0) {
        std::cout << _name << ": No more torpedo to fire, " << _captain->getName() << "!" << std::endl;
        return;
    } else if (_photonTorpedo - torpedo < 0) {
        std::cout << _name << ": no enough torpedoes to fire, " << _captain->getName() << "!" << std::endl;
        return;
    }
    std::cout << _name << ": Firing on target. " << _photonTorpedo << " torpedoes remaining." << std::endl;
    target->setShieldBorg(torpedo * 50);
}

void Federation::Starfleet::Ship::fire(int torpedo, Borg::Ship *target)
{
    if (_photonTorpedo - torpedo == 0) {
        std::cout << _name << ": No more torpedo to fire, " << _captain->getName() << "!" << std::endl;
        return;
    } else if (_photonTorpedo - torpedo < 0) {
        std::cout << _name << ": no enough torpedoes to fire, " << _captain->getName() << "!" << std::endl;
        return;
    }
    std::cout << _name << ": Firing on target. " << _photonTorpedo << " torpedoes remaining." << std::endl;
    target->setShieldBorg(torpedo * 50);
}

WarpSystem::Core *Federation::Starfleet::Ship::getCore()
{
    return (_core);
}

bool Federation::Starfleet::Ship::move(int warp, Destination d)
{
    if (warp > _maxWarp || d == _location || _core->checkReactor()->isStable() == false)
        return (false);
    _location = d;
    return (true);
}

bool Federation::Starfleet::Ship::move(int warp)
{
    if (warp > _maxWarp || _core->checkReactor()->isStable() == false)
        return (false);
    _location = _home;
    return (true);
}

bool Federation::Starfleet::Ship::move(Destination d)
{
    if (d == _location || _core->checkReactor()->isStable() == false)
        return (false);
    _location = d;
    return (true);
}

bool Federation::Starfleet::Ship::move()
{
    if (_core->checkReactor()->isStable() == false)
        return (false);
    _location = _home;
    return (true);
}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core)
{
    _core = core;
    std::cout << "USS " << _name << ": The core is set." << std::endl;
}

void Federation::Starfleet::Ship::checkCore()
{
    std::string a = "unstable";
    if (_core->checkReactor()->isStable() == true)
        a = "stable";
    std::cout << "USS " << _name << ": The core is " << a << " at the time." << std::endl;
}

Federation::Ship::Ship(int length, int width, std::string name)
{
    _length = length;
    _width = width;
    _name = name;
    _maxWarp = 1;
    std::cout << "The independent ship " << _name << " just finished its construction." << std::endl;
    std::cout << "It is " << _length << " m in length and " << _width << " m in width." << std::endl;
    _home = VULCAN;
    _location = _home;
}

void Federation::Ship::setupCore(WarpSystem::Core *core)
{
    _core = core;
    std::cout << _name << ": The core is set." << std::endl;
}

void Federation::Ship::checkCore()
{
    std::string a = "unstable";
    if (_core->checkReactor()->isStable() == true)
        a = "stable";
    std::cout << _name << ": The core is " << a << " at the time." << std::endl;
}

Federation::Starfleet::Captain::Captain(std::string name)
{
    _name = name;
}

std::string Federation::Starfleet::Captain::getName()
{
    return (_name);
}

int Federation::Starfleet::Captain::getAge()
{
    return (_age);
}

void Federation::Starfleet::Captain::setAge(int age)
{
    _age = age;
}

Federation::Starfleet::Ensign::Ensign(std::string name)
{
    _name = name;
    std::cout << "Ensign "<< _name << ", awaiting orders." << std::endl;
}

void Federation::Starfleet::Ship::promote(Captain *captain)
{
    _captain = captain;
    std::cout << _captain->getName() << ": I'm glad to be the captain of the USS " << _name << "." << std::endl;
}

bool Federation::Ship::move(int warp, Destination d)
{
    if (warp > _maxWarp || d == _location || _core->checkReactor()->isStable() == false)
        return (false);
    _location = d;
    return (true);
}

bool Federation::Ship::move(int warp)
{
    if (warp > _maxWarp || _core->checkReactor()->isStable() == false)
        return (false);
    _location = _home;
    return (true);
}

bool Federation::Ship::move(Destination d)
{
    if (d == _location || _core->checkReactor()->isStable() == false)
        return (false);
    _location = d;
    return (true);
}

bool Federation::Ship::move()
{
    if (_core->checkReactor()->isStable() == false)
        return (false);
    _location = _home;
    return (true);
}

WarpSystem::Core *Federation::Ship::getCore()
{
    return(_core);
}

void Federation::Starfleet::Ship::setShield(int shield)
{
    _shield -= shield;
}