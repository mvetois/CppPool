/*
** EPITECH PROJECT, 2020
** CPP Pool D14m
** File description:
** Fruit
*/

#ifndef FRUIT_HPP_
#define FRUIT_HPP_
#include <iostream>
#include <string>

class Fruit {
    public:
        ~Fruit();
        int getVitamins() const;
        std::string getName() const;
        Fruit &operator=(Fruit &fruit);
    protected:
        size_t _vitamin;
        std::string _name;
        Fruit(std::string const &name = "", int vitamin = 0);
};

#endif /* !FRUIT_HPP_ */
