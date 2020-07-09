/*
** EPITECH PROJECT, 2020
** CPP Pool D07A
** File description:
** Parts
*/

#include "Parts.hpp"

Arms::Arms(std::string serial, bool fonctional)
{
    _serial = serial;
    _functional = fonctional;
}

bool Arms::isFunctional()
{
    return (_functional);
}

std::string Arms::serial()
{
    return (_serial);
}

void Arms::informations()
{
    std::string ok = "OK";
    if (this->isFunctional() == false)
        ok = "KO";
    std::cout << "\t[Parts] Arms " << _serial << " status : " << ok << std::endl;
}

Legs::Legs(std::string serial, bool fonctional)
{
    _serial = serial;
    _functional = fonctional;
}

bool Legs::isFunctional()
{
    return (_functional);
}

std::string Legs::serial()
{
    return (_serial);
}

void Legs::informations()
{
    std::string ok = "OK";
    if (this->isFunctional() == false)
        ok = "KO";
    std::cout << "\t[Parts] Legs " << _serial << " status : " << ok << std::endl;
}

Head::Head(std::string serial, bool fonctional)
{
    _serial = serial;
    _functional = fonctional;
}

bool Head::isFunctional()
{
    return (_functional);
}

std::string Head::serial()
{
    return (_serial);
}

void Head::informations()
{
    std::string ok = "OK";
    if (this->isFunctional() == false)
        ok = "KO";
    std::cout << "\t[Parts] Head " << _serial << " status : " << ok << std::endl;
}