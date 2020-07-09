/*
** EPITECH PROJECT, 2019
** cpp_rush2_2019
** File description:
** Table.cpp
*/

#include <vector>
#include "../include/Table.hpp"

Table::Table() : _objects(std::vector<Object *>(10))
{}

Table::~Table()
{
    for (size_t it = 0; it < 10; it++)
        if (_objects[it])
            delete (_objects[it]);
}

Object* Table::take(size_t index)
{
    Object *cache = nullptr;

    if (index >= 10)
        return nullptr;
    cache = _objects[index];
    _objects[index] = nullptr;
    return cache;
}

std::vector<std::string*> *Table::look()
{
    auto result = new std::vector<std::string*>;

    for (int it = 0; it < 10; it++)
        if (_objects[it] != nullptr)
            result->push_back(new std::string(_objects[it]->getType()));
        else
            result->push_back(nullptr);
    result->push_back(nullptr);
    return result;
}

bool Table::put(Object *object)
{
    for (int it = 0; it < 10; it++)
        if (!_objects[it]) {
            _objects[it] = object;
            return true;
        }
    return false;
}

bool Table::put(Object *object, size_t index)
{
    if (index >= 10 || _objects[index] != nullptr)
        return false;
    _objects[index] = object;
    return true;
}

bool Table::isFull()
{
    for (int it = 0; it < 10; it++)
        if (_objects[it] == nullptr)
            return false;
    return true;
}
