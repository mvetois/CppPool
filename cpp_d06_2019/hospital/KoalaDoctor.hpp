/*
** EPITECH PROJECT, 2020
** CPP Pool D06
** File description:
** KoalaDoctor
*/

#ifndef KOALADOCTOR_HPP_
#define KOALADOCTOR_HPP_
#include <fstream>
#include <iostream>
#include <istream>
#include <iomanip>
#include <string.h>
#include "SickKoala.hpp"

class KoalaDoctor {
    public:
        KoalaDoctor(std::string name);
        ~KoalaDoctor();
        void diagnose(SickKoala *k);
        void timeCheck();
        std::string getName();
    private:
        std::string _name;
};

#endif /* !KOALADOCTOR_HPP_ */
