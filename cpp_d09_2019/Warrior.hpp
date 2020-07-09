/*
** EPITECH PROJECT, 2020
** CPP Pool D08
** File description:
** Warrior
*/

#ifndef WARRIOR_HPP_
#define WARRIOR_HPP_
#include "Character.hpp"

class Warrior : virtual public Character {
    public:
        Warrior(const std::string &name, int level);
        int CloseAttack();
        int RangeAttack();
    protected:
        std::string weapon;
};

#endif /* !WARRIOR_HPP_ */
