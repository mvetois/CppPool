/*
** EPITECH PROJECT, 2020
** CPP Pool D08
** File description:
** Droid
*/

#ifndef DROID_HPP_
#define DROID_HPP_
#include <string>
#include <fstream>
#include <iostream>
#include <istream>
#include <iomanip>
#include <ostream>

class Droid {
    public:
        Droid(std::string const serial = "");
        Droid(Droid const &cp);
        ~Droid();
        size_t getEnergy() const;
        void setEnergy(size_t energy);
        size_t getAttack() const;
        size_t getToughness() const;
        std::string getId() const;
        std::string *getStatus() const;
        void setId(std::string serial = "");
        void setStatus(std::string *status);
        Droid &operator=(Droid const &d);
        bool operator==(Droid const &) const;
        bool operator!=(Droid const &) const;
        Droid &operator<<(size_t &energy);
    private:
        std::string _serial;
        size_t _energy;
        const size_t _attack = 25;
        const size_t _toughness = 15;
        std::string *_status;
};
std::ostream &operator<<(std::ostream &os, const Droid &d);


#endif /* !DROID_HPP_ */
