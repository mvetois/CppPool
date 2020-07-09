/*
** EPITECH PROJECT, 2020
** CPP Pool D10
** File description:
** Victim
*/

#ifndef VICTIM_HPP_
#define VICTIM_HPP_
#include <string>
#include <fstream>
#include <iostream>
#include <istream>
#include <iomanip>
#include <ostream>

class Victim {
    public:
        Victim(std::string name);
        ~Victim();
        std::string getName() const;
        void getPolymorphed() const;
    protected:
    private:
        std::string _name;
};
std::ostream &operator<<(std::ostream &os, const Victim &v);


#endif /* !VICTIM_HPP_ */
