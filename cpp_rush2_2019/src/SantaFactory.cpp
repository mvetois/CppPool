/*
** EPITECH PROJECT, 2019
** exec
** File description:
** SantaFactory.cpp
*/

#include "../include/SantaFactory.hpp"

SantaFactory::SantaFactory() :
_conveyorBeltRand(new ConveyorBeltRand),
_tableRand(new TableRand)
{
    _elf = new Elf(_tableRand->getTable(), _conveyorBeltRand->getConveyorBelt());
}

SantaFactory::~SantaFactory()
{
    delete(_conveyorBeltRand);
    delete(_tableRand);
    delete(_elf);
}

void SantaFactory::BuildGift(size_t giftNbr, const std::string &fileDir)
{
    _conveyorBeltRand->getConveyorBelt().setDirectory(fileDir);
    while (giftNbr) {
        _tableRand->fillTable();
        _conveyorBeltRand->fillConveyorBelt();
        giftNbr -= _elf->run(giftNbr);
    }
}