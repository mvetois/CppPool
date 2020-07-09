/*
** EPITECH PROJECT, 2020
** CPP Pool D10
** File description:
** PlasmaRifle
*/

#ifndef PLASMARIFLE_HPP_
#define PLASMARIFLE_HPP_
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon{
    public:
        PlasmaRifle();
        ~PlasmaRifle();
        void attack() const final;
    private:
};

#endif /* !PLASMARIFLE_HPP_ */
