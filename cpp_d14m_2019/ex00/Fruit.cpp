/*
** EPITECH PROJECT, 2020
** CPP pool D14M
** File description:
** Fruit
*/

#include "Fruit.hpp"

Fruit::Fruit(std::string const &name, int vitamin)
{
    _name = name;
    _vitamin = vitamin;
}

Fruit::~Fruit()
{
}

int Fruit::getVitamins() const
{
    return (_vitamin);
}

std::string Fruit::getName() const
{
    return (_name);
}

Fruit &Fruit::operator=(Fruit &fruit)
{
    _name = fruit._name;
    _vitamin = fruit._vitamin;
    return (*this);
}