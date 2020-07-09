/*
** EPITECH PROJECT, 2019
** cpp_rush2_2019
** File description:
** IConveyorBelt.hpp
*/

#ifndef CPP_RUSH2_2019_ICONVEYORBELT_HPP
#define CPP_RUSH2_2019_ICONVEYORBELT_HPP

#include "Object.hpp"

class IConveyorBelt
{
public:
    virtual ~IConveyorBelt() = default;
    virtual void IN() = 0;
    virtual void OUT() = 0;
    virtual bool isEmpty() = 0;
    virtual Object *getObject() = 0;
    virtual bool putObject(Object *object) = 0;
};

#endif
