/*
** EPITECH PROJECT, 2020
** CPP Pool D07A
** File description:
** Parts
*/

#ifndef PARTS_HPP_
#define PARTS_HPP_
#include <string>
#include <fstream>
#include <iostream>
#include <istream>
#include <iomanip>

class Arms {
    public:
        Arms(std::string serial = "A-01", bool functional = true);
        std::string serial();
        bool isFunctional();
        void informations();
    private:
        std::string _serial;
        bool _functional;
};

class Legs {
    public:
        Legs(std::string serial = "L-01", bool functional = true);
        std::string serial();
        bool isFunctional();
        void informations();
    private:
        std::string _serial;
        bool _functional;
};

class Head {
    public:
        Head(std::string serial = "H-01", bool functional = true);
        std::string serial();
        bool isFunctional();
        void informations();
    private:
        std::string _serial;
        bool _functional;
};

#endif /* !PARTS_HPP_ */
