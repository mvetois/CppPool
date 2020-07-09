/*
** EPITECH PROJECT, 2020
** CPP Pool D10
** File description:
** Character
*/

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_
#include "AWeapon.hpp"
#include "AEnemy.hpp"

class Character {
    public:
        Character(const std::string &name);
        ~Character();
        void recoverAP();
        void equip(AWeapon *weapon);
        void attack(AEnemy *enemy);
        std::string getName() const;
        int getAP() const;
        AWeapon *getWeapon() const;
    private:
        std::string _name;
        int _ap;
        AWeapon *_weapon;
};
std::ostream &operator<<(std::ostream &os, Character const &c);


#endif /* !CHARACTER_HPP_ */
