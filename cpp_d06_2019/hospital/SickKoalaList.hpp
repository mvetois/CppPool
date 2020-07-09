/*
** EPITECH PROJECT, 2020
** CPP Pool D06
** File description:
** SickKoalaList
*/

#ifndef SICKKOALALIST_HPP_
#define SICKKOALALIST_HPP_
#include <fstream>
#include <iostream>
#include <istream>
#include <iomanip>
#include <string.h>
#include "SickKoala.hpp"

class SickKoalaList {
    public:
        SickKoalaList(SickKoala *sk);
        ~SickKoalaList();
        bool isEnd();
        void append(SickKoalaList* next);
        SickKoala *getFromName(std::string name);
        SickKoalaList *remove(SickKoalaList* remove);
    private:
        SickKoala *_sk;
        SickKoalaList *_next;
};

#endif /* !SICKKOALALIST_HPP_ */
