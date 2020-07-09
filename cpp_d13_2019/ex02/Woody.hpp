/*
** EPITECH PROJECT, 2020
** CPP Pool D13
** File description:
** WOODY
*/

#ifndef WOODY_HPP_
#define WOODY_HPP_
#include "Toy.hpp"

class Woody : public Toy {
    public:
        Woody(std::string const &name);
        Woody(std::string const &name, std::string const &file);
        Woody(Woody const &Woody);
        Woody &operator=(Woody const&);
        ~Woody();

};
#endif /* !WOODY_HPP_ */
