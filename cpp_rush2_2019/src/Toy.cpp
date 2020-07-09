/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** Toy
*/

#include <iostream>
#include "../include/Toy.hpp"

Toy::Toy(const std::string &name) : Object(name)
{
    _isTaken = false;
}

void Toy::isTaken()
{
    if (!_isTaken)
        std::cout << "gra hu" << std::endl;
    _isTaken = true;
}

