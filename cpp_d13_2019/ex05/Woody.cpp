/*
** EPITECH PROJECT, 2020
** CPP Pool D13
** File description:
** Woody
*/

#include "Woody.hpp"

Woody::Woody(Woody const& toy) : Toy(WOODY, toy._name, "") {
    _p = toy._p;
}

Woody::~Woody()
{
}

Woody::Woody(std::string const& name) : Toy(WOODY, name, "./woody.txt")
{
}

Woody::Woody(std::string const& name, std::string const& file) : Toy(WOODY, name, file)
{
}

Woody &Woody::operator=(Woody const &toy)
{
    _name = toy._name;
    _toytype = toy._toytype;
    _p = toy._p;
    return *this;
}
