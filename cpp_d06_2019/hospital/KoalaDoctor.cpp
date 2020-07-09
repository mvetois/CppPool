/*
** EPITECH PROJECT, 2020
** CPP Pool D06
** File description:
** KoalaDoctor
*/

#include "KoalaDoctor.hpp"

KoalaDoctor::KoalaDoctor(std::string name)
{
    _name = name;
    std::cout << "Dr." << _name << ": I'm Dr." << _name << "! How do you kreog?" << std::endl;
}

KoalaDoctor::~KoalaDoctor()
{
}

void KoalaDoctor::diagnose(SickKoala *k)
{
    std::string list[] = {"Mars", "Buronzand", "Viagra", "Extasy", "Eucalyptus leaf"};
    std::cout << "Dr." << _name << ": So what's goerking you Mr." << k->getName() << "?" << std::endl;
    k->poke();
    std::string n = k->getName();
    n += ".report";
    std::ofstream fs(n , std::ofstream::binary);
    fs << list[random()%5];
    fs.close();
}

void KoalaDoctor::timeCheck()
{
    static bool a = false;

    if (a == false) {
        std::cout << "Dr." << _name << ": Time to get to work!" << std::endl;
        a = true;
    } else {
        std::cout << "Dr." << _name << ": Time to go home to my eucalyptus forest!" << std::endl;
        a = false;
    }
}

std::string KoalaDoctor::getName()
{
    return(_name);
}
