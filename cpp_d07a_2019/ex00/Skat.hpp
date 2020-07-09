/*
** EPITECH PROJECT, 2020
** CPP Pool D07A
** File description:
** Skat
*/

#ifndef SKAT_HPP_
#define SKAT_HPP_
#include <string>
#include <fstream>
#include <iostream>
#include <istream>
#include <iomanip>

class Skat {
    public:
        Skat(const std::string &name = "bob", int stimPaks = 15);
        ~Skat();
        int stimPaks();
        const std::string &name();
        void shareStimPaks(int number, int stock);
        void addStimPaks(unsigned int number);
        void useStimPaks();
        void status();
    private:
        std::string _name;
        int _stock;
};

#endif /* !SKAT_HPP_ */
