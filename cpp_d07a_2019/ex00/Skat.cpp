/*
** EPITECH PROJECT, 2020
** CPP Pool D07A
** File description:
** Skat
*/

#include "Skat.hpp"
#include <string.h>

Skat::Skat(const std::string &name, int stimPaks)
{
    _name = name;
    _stock = stimPaks;
}

Skat::~Skat()
{
}

int Skat::stimPaks()
{
    return (_stock);
}

const std::string &Skat::name()
{
    return (_name);
}

void Skat::shareStimPaks(int number, int stock)
{
    if (number <= _stock) {
        stock += number;
        _stock -= number;
        std::cout << "Keep the change." << std::endl;
    }
    else
        std::cout << "Dont't be greedy" << std::endl;
}

void Skat::addStimPaks(unsigned int number)
{
    if (number == 0)
        std::cout << "Hey boya, did you forget something?" << std::endl;
    _stock += number;
}

void Skat::useStimPaks()
{
    if (_stock > 0) {
        std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
        _stock--;
    } else
        std::cout << "Mediiiiiic" << std::endl;
}

void Skat::status()
{
    std::cout << "Soldier " << _name << " reporting " << _stock << " stimpaks remaining sir!" << std::endl;
}