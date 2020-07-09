/*
** EPITECH PROJECT, 2019
** cpp_rush2_2019
** File description:
** PapaXmasConveyorBelt.cpp
*/

#include "../include/PapaXmasConveyorBelt.hpp"
#include "../include/XmlWriter.hpp"

void xmlCreator(Object *obj, std::string fileName);

static const std::string names[] = {
    #include "../bdd/Names.list"
};

PapaXmasConveyorBelt::PapaXmasConveyorBelt() : _object(nullptr)
{}

bool PapaXmasConveyorBelt::isEmpty()
{
    return (_object == nullptr);
}

Object* PapaXmasConveyorBelt::getObject()
{
    Object *cache = _object;

    _object = nullptr;
    return cache;
}

void PapaXmasConveyorBelt::IN()
{
    int wrap = rand() % 2;

    if (_object != nullptr)
        return;
    if (wrap == 0)
        _object = new Box;
    else
        _object = new GiftPaper;
}

void PapaXmasConveyorBelt::OUT()
{
    XmlWriter x;
    static size_t nb = rand() % 8928;
    std::string n = "./gifts/Gift_for_";
    n += names[nb++];
    n += ".xml";
    x.WriteOnFile(_object, n);
}

bool PapaXmasConveyorBelt::putObject(Object *object)
{
    if (_object != nullptr)
        return false;
    _object = object;
    return true;
}