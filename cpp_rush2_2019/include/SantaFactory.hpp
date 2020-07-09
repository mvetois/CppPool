/*
** EPITECH PROJECT, 2019
** exec
** File description:
** SantaFactory.hpp
*/

#ifndef EXEC_SANTAFACTORY_HPP
#define EXEC_SANTAFACTORY_HPP

#include "ConveyorBeltRand.hpp"
#include "TableRand.hpp"
#include "Elf.hpp"

class SantaFactory
{
public:
    SantaFactory();
    ~SantaFactory();

    void BuildGift(size_t giftNbr, const std::string &fileDir);
private:
    ConveyorBeltRand *_conveyorBeltRand;
    TableRand *_tableRand;
    IElf *_elf;
};

#endif
