/*
** EPITECH PROJECT, 2020
** CPP Pool D10
** File description:
** Sorcerer
*/

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
    _name = name;
    _title = title;
    std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string Sorcerer::getName() const
{
    return (_name);
}

std::string Sorcerer::getTitle() const
{
    return (_title);
}

std::ostream &operator<<(std::ostream &os, const Sorcerer &v)
{
    return(os << "I am " << v.getName() << ", " << v.getTitle() << ", and I like ponies!" << std::endl);
}

void Sorcerer::polymorph(const Victim &victim)
{
    victim.getPolymorphed();
}

void Sorcerer::polymorph(const Peon &victim)
{
    victim.getPolymorphed();
}
