/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** Wrap
*/

#include "../include/Wrap.hpp"
#include "../include/Toy.hpp"

Object *Wrap::getObject() const
{
    return _object;
}

void Wrap::closeMe()
{
    _open = false;
}

void Wrap::openMe()
{
    _open = true;
}

void Wrap::wrapMeThat(Object *object)
{
    if (!_object) {
        _object = object;
        if (_object->getName() != "GiftPaper" && _object->getName() != "Box")
            ((Toy *)_object)->isTaken();
    }
}

Wrap::Wrap(const std::string &name) : Object(name), _object(nullptr)
{
}

Wrap::~Wrap()
{
    if (_object)
        delete(_object);
}