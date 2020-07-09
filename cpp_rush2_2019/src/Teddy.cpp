/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** Teddy
*/

#include <iostream>
#include "../include/Teddy.hpp"

Teddy::Teddy(const std::string &name) : Toy(name)
{
    _type = "Teddy";
    _isTaken = false;
}
