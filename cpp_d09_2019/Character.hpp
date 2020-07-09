/*
** EPITECH PROJECT, 2020
** CPP Pool D09
** File description:
** Character
*/

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_
#include <string>
#include <fstream>
#include <iostream>
#include <istream>
#include <iomanip>
#include <ostream>

class Character {
    public:
        Character(const std::string &name, int level);
        const std::string &getName() const;
        int getLvl() const;
        int getPv() const;
        int getPower() const;
        typedef enum AttackRange {
            CLOSE,
            RANGE
        } AttackRange;
        int CloseAttack();
        void Heal();
        int RangeAttack();
        void RestorePower();
        void TakeDamage(int damage);
        AttackRange Range;
    protected:
        std::string _name;
        int _level;
        int _pv;
        int _energy;

        int _strength;
        int _stamina;
        int _intelligence;
        int _spirit;
        int _agility;
};

#endif /* !CHARACTER_HPP_ */
