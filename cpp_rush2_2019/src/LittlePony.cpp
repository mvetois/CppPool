/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** LittlePony
*/

#include "../include/LittlePony.hpp"
#include "../include/Toy.hpp"

LittlePony::LittlePony(const std::string &name) : Toy(name)
{
    _type = "LittlePony";
}
