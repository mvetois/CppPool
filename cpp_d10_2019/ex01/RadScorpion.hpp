/*
** EPITECH PROJECT, 2020
** CPP Pool D10
** File description:
** RadScorpion
*/

#ifndef RADSCORPION_HPP_
#define RADSCORPION_HPP_
#include "AEnemy.hpp"

class RadScorpion : public AEnemy {
    public:
        RadScorpion();
        virtual ~RadScorpion();
        void takeDamage(int);
    protected:
    private:
};

#endif /* !RADSCORPION_HPP_ */
