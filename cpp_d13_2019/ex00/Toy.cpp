/*
** EPITECH PROJECT, 2020
** CPP Pool D13
** File description:
** Toy
*/

#include "Toy.hpp"

Toy::Toy(int type, const std::string name, const std::string file) : _p(Picture(file))
{
    _toytype = type;
    _file = file;
    _name = name;
}

int Toy::getType() const
{
    return (_toytype);
}

std::string Toy::getName() const
{
    return (_name);
}

void Toy::setName(const std::string name)
{
    _name = name;
}

bool Toy::setAscii(const std::string &file)
{
    return (_p.getPictureFromFile(file));
}

std::string Toy::getAscii() const
{
    return (_p.data);
}