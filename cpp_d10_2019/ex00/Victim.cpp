/*
** EPITECH PROJECT, 2020
** CPP Pool D10
** File description:
** Victim
*/

#include "Victim.hpp"

Victim::Victim(std::string name)
{
    _name = name;
    std::cout << "Some random victim called " << _name << " just popped!" << std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

std::string Victim::getName() const
{
    return (_name);
}

std::ostream &operator<<(std::ostream &os, const Victim &v)
{
    return(os << "I'm " << v.getName() << " and I like otters!" << std::endl);
}

void Victim::getPolymorphed() const
{
    std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}