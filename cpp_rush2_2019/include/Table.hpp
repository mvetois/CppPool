/*
** EPITECH PROJECT, 2019
** cpp_rush2_2019
** File description:
** Table.hpp
*/

#ifndef CPP_RUSH2_2019_TABLE_HPP
#define CPP_RUSH2_2019_TABLE_HPP

#include "ITable.hpp"

class Table : public ITable
{
public:
    Table();
    ~Table() override;

    bool put(Object *) override;
    bool put(Object *, size_t index) override;
    Object *take(size_t index) override;
    std::vector<std::string*> *look() override;
    bool isFull() override;
private:
    std::vector<Object *> _objects;
};

#endif
