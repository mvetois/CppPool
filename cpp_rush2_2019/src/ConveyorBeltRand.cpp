/*
** EPITECH PROJECT, 2019
** exec
** File description:
** ConveyorBeltRand.cpp
*/

#include "../include/ConveyorBeltRand.hpp"

ConveyorBeltRand::ConveyorBeltRand() : _conveyorBelt(new ConveyorBelt)
{}

ConveyorBeltRand::~ConveyorBeltRand()
{
    delete _conveyorBelt;
}

void ConveyorBeltRand::clearConveyorBelt()
{
    if (!_conveyorBelt->isEmpty())
        delete(_conveyorBelt->getObject());
}

void ConveyorBeltRand::fillConveyorBelt()
{
    _conveyorBelt->IN();
}

ConveyorBelt& ConveyorBeltRand::getConveyorBelt()
{
    return *_conveyorBelt;
}