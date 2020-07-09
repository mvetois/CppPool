/*
** EPITECH PROJECT, 2020
** CPP Pool D06
** File description:
** SickKoala
*/

#include "SickKoala.hpp"

SickKoala::SickKoala(std::string name)
{
    _name = name;
}

SickKoala::~SickKoala()
{
    std::cout << "Mr." << _name << ": Kreooogg!! I'm cuuuured!" << std::endl;
    _name.empty();
}

void SickKoala::poke()
{
    std::cout << "Mr." << _name << ": Gooeeeeerrk!!" << std::endl;
}

bool SickKoala::takeDrug(std::string drug)
{
    if (drug == "Mars")
        std::cout << "Mr." << _name << ": Mars, and it kreogs!" << std::endl;
    else if (drug == "Buronzand")
        std::cout << "Mr." << _name << ": And you'll sleep right away!" << std::endl;
    else {
        std::cout << "Mr." << _name << ": Goerkreog!" << std::endl;
        return false;
    }
    return true;
}

void SickKoala::overDrive(std::string str)
{
    std::size_t pos = 0;

    while ((pos = str.find("Kreog!", pos)) != std::string::npos)
        str.replace(pos, 6, "1337!");
    std::cout << "Mr."<< _name << ": " << str << std::endl;
}

std::string SickKoala::getName()
{
    return(_name);
}
