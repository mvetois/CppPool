/*
** EPITECH PROJECT, 2020
** CPP Pool D10
** File description:
** AWeapon
*/

#ifndef AWEAPON_HPP_
#define AWEAPON_HPP_
#include <string>
#include <fstream>
#include <iostream>
#include <istream>
#include <iomanip>
#include <ostream>

class AWeapon {
    public:
        AWeapon(const std::string &name, int apcost, int damage);
        virtual ~AWeapon();
        std::string getName() const;
        int getAPCost() const;
        int getDamage() const;
        virtual void attack() const = 0;
    private:
        std::string _name;
        int _damage;
        int _ap;
};

#endif /* !AWEAPON_HPP_ */
