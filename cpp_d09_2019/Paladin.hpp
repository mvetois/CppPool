/*
** EPITECH PROJECT, 2020
** CPP Pool D09
** File description:
** Paladin
*/

#ifndef PALADIN_HPP_
#define PALADIN_HPP_

#include "Priest.hpp"
#include "Warrior.hpp"

class Paladin : public Warrior, public Priest {
    public:
        Paladin(const std::string&, int);
        using Warrior::CloseAttack;
        using Priest::RangeAttack;
        using Priest::Heal;
        using Warrior::RestorePower;
        int Intercept();
    protected:
        std::string weapon;
};

#endif /* !PALADIN_HPP_ */
