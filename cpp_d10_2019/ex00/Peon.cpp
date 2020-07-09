/*
** EPITECH PROJECT, 2020
** CPP Pool D10
** File description:
** Peon
*/

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
    _name = name;
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
    std::cout << _name << " has been turned into a pink pony!" << std::endl;
}