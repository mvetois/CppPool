/*
** EPITECH PROJECT, 2019
** exec
** File description:
** TableRand.hpp
*/

#ifndef EXEC_TABLERAND_HPP
#define EXEC_TABLERAND_HPP

#include "Table.hpp"
#include "Teddy.hpp"
#include "LittlePony.hpp"

class TableRand
{
public:
    TableRand();
    ~TableRand();

    void clearTable();
    void fillTable();

    Table &getTable();
private:
    Table *_table;
};

#endif
