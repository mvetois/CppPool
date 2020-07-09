/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** Box
*/

#include "../include/Box.hpp"

void Box::wrapMeThat(Object *object)
{
    if (_open)
        Wrap::wrapMeThat(object);
}

Box::Box() : Wrap("Box")
{
    _open = false;
    _type = "Box";
}
