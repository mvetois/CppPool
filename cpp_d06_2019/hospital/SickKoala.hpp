/*
** EPITECH PROJECT, 2020
** CPP Pool D06
** File description:
** SickKoala
*/

#ifndef SICKKOALA_HPP_
#define SICKKOALA_HPP_
#include <fstream>
#include <iostream>
#include <istream>
#include <iomanip>

class SickKoala {
    public:
        SickKoala(std::string name);
        ~SickKoala();
        void poke();
        bool takeDrug(std::string drug);
        void overDrive(std::string str);
        std::string getName();
    private:
        std::string _name;
};

#endif /* !SICKKOALA_HPP_ */
