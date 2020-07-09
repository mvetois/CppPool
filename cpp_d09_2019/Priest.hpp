/*
** EPITECH PROJECT, 2020
** CPP Pool D09
** File description:
** Priest
*/

#ifndef PRIEST_HPP_
#define PRIEST_HPP_

#include "Mage.hpp"

class Priest : public Mage {
    public:
        Priest(const std::string&, int);
        int CloseAttack();
        void Heal();
};


#endif /* !PRIEST_HPP_ */
