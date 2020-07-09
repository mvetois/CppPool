/*
** EPITECH PROJECT, 2019
** cpp_rush2_2019
** File description:
** ITable.hpp
*/

#ifndef CPP_RUSH2_2019_ITABLE_HPP
#define CPP_RUSH2_2019_ITABLE_HPP

#include <vector>
#include <string>
#include "Object.hpp"

class ITable
{
public:
    virtual ~ITable() = default;
    virtual bool put(Object *) = 0;
    virtual bool put(Object *, size_t index) = 0;
    virtual Object *take(size_t index) = 0;
    virtual std::vector<std::string*> *look() = 0;
    virtual bool isFull() = 0;
};

#endif
