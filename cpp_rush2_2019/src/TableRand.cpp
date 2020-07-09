/*
** EPITECH PROJECT, 2019
** exec
** File description:
** TableRand.cpp
*/

#include "../include/TableRand.hpp"
#include "../include/Box.hpp"
#include "../include/GiftPaper.hpp"

TableRand::TableRand() : _table(new Table)
{}

TableRand::~TableRand()
{
    delete _table;
}

void TableRand::clearTable()
{
    Object *cache;

    for (int it = 0; it < 10; it++) {
        cache = _table->take(it);
        if (cache)
            delete (cache);
    }
}

void TableRand::fillTable()
{
    const std::string toysNames[6] {
        "TiCloune",
        "Barbie",
        "Beyblade",
        "Woody",
        "Buzz",
        "Jessie"
    };

    clearTable();
    for (int it = 0; it < 10; it++) {
        switch (rand() % 4) {
            case 0 :
                _table->put(new Box);
                break;
            case 1 :
                _table->put(new GiftPaper);
                break;
            case 2 :
                _table->put(new Teddy(toysNames[rand() % 6]));
                break;
            case 3 :
                _table->put(new LittlePony(toysNames[rand() % 6]));
                break;
            default :
                break;
        }
    }
}

Table& TableRand::getTable()
{
    return *_table;
}