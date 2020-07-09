/*
** EPITECH PROJECT, 2020
** CPP Pool D10
** File description:
** Peon
*/

#ifndef PEON_HPP_
#define PEON_HPP_
#include "Victim.hpp"

class Peon : public Victim {
    public:
        Peon(std::string name);
        ~Peon();
        void getPolymorphed() const;
    protected:
    private:
        std::string _name;
};

#endif /* !PEON_HPP_ */
