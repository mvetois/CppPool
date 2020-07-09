/*
** EPITECH PROJECT, 2020
** cpp_rush2_2019
** File description:
** Toy
*/

#ifndef TOY_HPP_
#define TOY_HPP_

#include "Object.hpp"

class Toy : public Object {
    public:
        explicit Toy(const std::string &name = "Toy");
        ~Toy() = default;

        void isTaken();
    protected:
        bool _isTaken;

};

#endif /* !TOY_HPP_ */