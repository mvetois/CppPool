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
        class Error {
            public:
                enum ErrorType {
                    UNKNOWN,
                    PICTURE,
                    SPEAK
                };
                ErrorType type;
                Error();
                void setType(ErrorType type);
                std::string what() const;
                std::string where() const;
                int getType() const;
            };
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
        bool speak_es(std::string const &msg);
        Toy::Error getLastError() const;
    protected:
        int _toytype;
        std::string _name = "";
        std::string _file;
        Picture _p;
        Error error;
};
std::ostream &operator<<(std::ostream &os, Toy const &toy);
#endif /* !TOY_HPP_ */
