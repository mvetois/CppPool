/*
** EPITECH PROJECT, 2020
** CPP Pool D13
** File description:
** Buzz
*/

#include "Buzz.hpp"

Buzz::Buzz(Buzz const& toy) : Toy(BUZZ, toy._name, "") {
    _p = toy._p;
}

Buzz::~Buzz()
{
}

Buzz::Buzz(std::string const& name) : Toy(BUZZ, name, "./buzz.txt")
{
}

Buzz::Buzz(std::string const& name, std::string const& file) : Toy(BUZZ, name, file)
{
}

Buzz &Buzz::operator=(Buzz const &toy)
{
    _name = toy._name;
    _toytype = toy._toytype;
    _p = toy._p;
    return *this;
}
