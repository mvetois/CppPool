/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** Object
*/

#include "../include/Object.hpp"

Object::Object(const std::string &name) : _name(name), _type("Object")
{}

const std::string &Object::getName() const
{
    return (_name);
}

Object* Object::getObject() const
{
    return nullptr;
}

const std::string& Object::getType() const
{
    return _type;
}