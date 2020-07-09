/*
** EPITECH PROJECT, 2020
** CPP Pool D13
** File description:
** Toy
*/

#ifndef TOY_HPP_
#define TOY_HPP_
#include "Picture.hpp"

class Toy {
    public:
        enum ToyType {
            BASIC_TOY,
            ALIEN
        };
        Toy(int type = BASIC_TOY, const std::string name = "toy", const std::string file = "");
        Toy(Toy const &toy);
        int getType() const;
        std::string getName() const;
        void setName(const std::string name);
        bool setAscii(const std::string &file);
        std::string getAscii() const;
        Toy &operator=(Toy const &toy);
    private:
        int _toytype;
        std::string _name = "";
        std::string _file;
        Picture _p;
};

#endif /* !TOY_HPP_ */
