/*
** EPITECH PROJECT, 2020
** CPP Pool D09
** File description:
** Hunter
*/

#ifndef HUNTER_HPP_
#define HUNTER_HPP_
#include "Warrior.hpp"
#include "Character.hpp"

class Hunter : public Warrior {
    public:
        Hunter(const std::string&, int);
        int RangeAttack();
        void RestorePower();
        using Warrior::CloseAttack;
        using Warrior::Heal;
};

#endif /* !HUNTER_HPP_ */
