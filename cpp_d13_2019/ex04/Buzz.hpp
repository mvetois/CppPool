/*
** EPITECH PROJECT, 2020
** CPP Pool D13
** File description:
** Buzz
*/

#ifndef BUZZ_HPP_
#define BUZZ_HPP_
#include "Toy.hpp"

class Buzz : public Toy {
    public:
        Buzz(std::string const &name);
        Buzz(std::string const &name, std::string const &file);
        Buzz(Buzz const &buzz);
        Buzz &operator=(Buzz const&);
        ~Buzz();

};
#endif /* !BUZZ_HPP_ */
