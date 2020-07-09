/*
** EPITECH PROJECT, 2020
** CPP Pool D09
** File description:
** Mage
*/

#ifndef MAGE_HPP_
#define MAGE_HPP_

#include "Character.hpp"

class Mage : virtual public Character {
    public:
        Mage(const std::string&, int);
        void RestorePower();
        int RangeAttack();
        int CloseAttack();
};

#endif /* !MAGE_HPP_ */
