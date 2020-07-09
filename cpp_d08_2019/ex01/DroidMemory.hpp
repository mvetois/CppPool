/*
** EPITECH PROJECT, 2020
** CPP Pool D08
** File description:
** DroidMemory
*/

#ifndef DROIDMEMORY_HPP_
#define DROIDMEMORY_HPP_
#include <string>
#include <fstream>
#include <iostream>
#include <istream>
#include <iomanip>
#include <ostream>

class DroidMemory {
    public:
        DroidMemory();
        ~DroidMemory();
        size_t getFingerPrint() const;
        size_t getExp() const;
        DroidMemory &operator<<(DroidMemory const &d);
        DroidMemory &operator>>(DroidMemory &d);
        DroidMemory &operator+=(DroidMemory const &d);
        DroidMemory &operator+=(size_t const &d);
        DroidMemory &operator+(DroidMemory const &d) const;
        DroidMemory &operator+(size_t const &d) const;
        DroidMemory &operator=(DroidMemory const &d);
    private:
        size_t _fingerprint;
        size_t _exp;
};
std::ostream &operator<<(std::ostream &os, const DroidMemory &d);


#endif /* !DROIDMEMORY_HPP_ */
