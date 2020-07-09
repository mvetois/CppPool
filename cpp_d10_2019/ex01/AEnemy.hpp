/*
** EPITECH PROJECT, 2020
** CPP Pool D10
** File description:
** AEnemy
*/

#ifndef AENEMY_HPP_
#define AENEMY_HPP_
#include <string>
#include <fstream>
#include <iostream>
#include <istream>
#include <iomanip>
#include <ostream>

class AEnemy {
    public:
        AEnemy(int hp, const std::string &type);
        virtual ~AEnemy();
        virtual void takeDamage(int damage);
        std::string getType() const;
        int getHP() const;
    private:
        std::string _type;
        int _hp;
};

#endif /* !AENEMY_HPP_ */
