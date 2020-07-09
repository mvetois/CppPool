/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** Teddy
*/

#ifndef TEDDY_HPP_
#define TEDDY_HPP_

#include "Toy.hpp"

class Teddy : public Toy {
    public:
        explicit Teddy(const std::string &name);
        ~Teddy() = default;
    private:
};

#endif /* !TEDDY_HPP_ */