/*
** EPITECH PROJECT, 2020
** CPP Pool D06
** File description:
** KoalaNurse
*/

#ifndef KOALANURSE_HPP_
#define KOALANURSE_HPP_
#include <fstream>
#include <iostream>
#include <istream>
#include <iomanip>
#include <string.h>
#include "SickKoala.hpp"

class KoalaNurse {
    public:
        KoalaNurse(int id);
        ~KoalaNurse();
        void giveDrug(std::string str, SickKoala *name);
        std::string readReport(std::string str);
        void timeCheck();
        int getID();
    private:
        int _id;
};

#endif /* !KOALANURSE_HPP_ */
