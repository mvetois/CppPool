/*
** EPITECH PROJECT, 2019
** cpp_rush2_2019
** File description:
** PapaXmasConveyorBelt.hpp
*/

#ifndef CPP_RUSH2_2019_PAPAXMASCONVEYORBELT_HPP
#define CPP_RUSH2_2019_PAPAXMASCONVEYORBELT_HPP

#include "Box.hpp"
#include "GiftPaper.hpp"
#include "Object.hpp"
#include "IConveyorBelt.hpp"

class PapaXmasConveyorBelt : public IConveyorBelt
{
public:
    PapaXmasConveyorBelt();

    void IN();
    void OUT();
    bool isEmpty();
    Object *getObject();
    bool putObject(Object *object);
private:
    Object *_object;
};

#endif
