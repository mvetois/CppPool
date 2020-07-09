/*
** EPITECH PROJECT, 2019
** exec
** File description:
** ConveyorBeltRand.hpp
*/

#ifndef EXEC_CONVEYORBELTRAND_HPP
#define EXEC_CONVEYORBELTRAND_HPP

#include "ConveyorBelt.hpp"

class ConveyorBeltRand
{
public:
    ConveyorBeltRand();
    virtual ~ConveyorBeltRand();

    void clearConveyorBelt();
    void fillConveyorBelt();

    ConveyorBelt &getConveyorBelt();
private:
    ConveyorBelt *_conveyorBelt;
};

#endif
