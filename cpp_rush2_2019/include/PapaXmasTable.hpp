/*
** EPITECH PROJECT, 2019
** cpp_rush2_2019
** File description:
** PapaXmasTable.hpp
*/

#ifndef CPP_RUSH2_2019_PAPAXMASTABLE_HPP
#define CPP_RUSH2_2019_PAPAXMASTABLE_HPP

#include <vector>
#include "ITable.hpp"
#include "Object.hpp"

class PapaXmasTable : public ITable
{
public:
    PapaXmasTable();
    ~PapaXmasTable();

    bool put(Object *);
    bool put(Object *, size_t index);
    Object *take(size_t index);
    std::vector<std::string*> *look();
    bool isFull();
private:
    std::vector<Object *> _objects;
};

#endif
