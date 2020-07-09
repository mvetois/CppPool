/*
** EPITECH PROJECT, 2020
** CPP Pool D13
** File description:
** Toy
*/

#ifndef TOY_HPP_
#define TOY_HPP_
#include "Picture.hpp"
#include <memory>
#include <iostream>

class Toy {
    public:
        enum ToyType {
            BASIC_TOY,
            ALIEN,
            BUZZ,
            WOODY
        };
        Toy(int type = BASIC_TOY, const std::string name = "toy", const std::string file = "");
        Toy(Toy const &toy);
        int getType() const;
        std::string getName() const;
        void setName(const std::string name);
        bool setAscii(const std::string &file);
        std::string getAscii() const;
        Toy &operator=(Toy const &toy);
        void speak(std::string const &msg);
        std::string tlist[4] = {"BASIC_TOY", "ALIEN", "BUZZ", "WOODY"};
        Toy &operator<<(std::string const &msg);
    protected:
        int _toytype;
        std::string _name = "";
        std::string _file;
        Picture _p;
};
std::ostream &operator<<(std::ostream &os, Toy const &toy);
#endif /* !TOY_HPP_ */
