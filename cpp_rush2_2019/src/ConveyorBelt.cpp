/*
** EPITECH PROJECT, 2019
** cpp_rush2_2019
** File description:
** ConveyorBelt.cpp
*/

#include "../include/ConveyorBelt.hpp"

static const std::string names[] = {
    #include "../bdd/Names.list"
};

ConveyorBelt::ConveyorBelt() : _object(nullptr), _directory("")
{}

ConveyorBelt::~ConveyorBelt()
{
    if (_object)
        delete(_object);
}

bool ConveyorBelt::isEmpty()
{
    return (_object == nullptr);
}

Object* ConveyorBelt::getObject()
{
    Object *cache = _object;

    _object = nullptr;
    return cache;
}

void ConveyorBelt::IN()
{
    int wrap = rand() % 2;

    if (_object != nullptr)
        return;
    if (wrap == 0)
        _object = new Box;
    else
        _object = new GiftPaper;
}

void ConveyorBelt::setDirectory(const std::string &directory)
{
    _directory = directory;
}

void ConveyorBelt::OUT()
{
    XmlWriter x;

    if (!_object)
        return;
    std::string n = "./" + _directory + "/Gift_for_";
    n += names[rand() % 8928];
    n += ".xml";
    x.WriteOnFile(_object, n);
    delete (_object);
    _object = nullptr;
}

bool ConveyorBelt::putObject(Object *object)
{
    if (_object != nullptr)
        return false;
    _object = object;
    return true;
}