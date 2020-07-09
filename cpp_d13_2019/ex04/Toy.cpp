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

Toy::Toy(Toy const &toy) : _toytype(toy.getType()), _name(toy.getName()), _p(toy._p)
{
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

Toy &Toy::operator=(Toy const &toy) {
    _name = toy._name;
    _toytype = toy._toytype;
    _p = toy._p;
    return (*this);
}

void Toy::speak(std::string const &msg)
{
    if (_toytype != ALIEN && _toytype != BASIC_TOY)
        std::cout << tlist[_toytype] << ": " << _name << " \"" << msg << "\""<<std::endl;
    else
        std::cout << _name << " \"" << msg << "\""<<std::endl;
}

std::ostream &operator<<(std::ostream &os, Toy const &toy)
{
    return (os << toy.getName() << std::endl << toy.getAscii() << std::endl);
}

Toy &Toy::operator<<(std::string const &msg)
{
    _p.data = msg;
    return (*this);
}
