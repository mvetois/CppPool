/*
** EPITECH PROJECT, 2020
** CPP Pool D10
** File description:
** SuperMutant
*/

#ifndef SUPERMUTANT_HPP_
#define SUPERMUTANT_HPP_
#include "AEnemy.hpp"

class SuperMutant : public AEnemy {
    public:
        SuperMutant();
        virtual ~SuperMutant();
        void takeDamage(int);
    protected:
    private:
};

#endif /* !SUPERMUTANT_HPP_ */
