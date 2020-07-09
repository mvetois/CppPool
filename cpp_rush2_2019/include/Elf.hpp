/*
** EPITECH PROJECT, 2020
** CPP Pool Rush2
** File description:
** Elf
*/

#ifndef ELF_HPP_
#define ELF_HPP_
#include <iostream>
#include "IElf.hpp"
#include "ITable.hpp"
#include "IConveyorBelt.hpp"
#include "GiftPaper.hpp"
#include "Box.hpp"

class Elf : public IElf {
    public:
        Elf(ITable &t,IConveyorBelt &c);
        ~Elf() override = default;


        bool mvCbTable();
        bool mvTableCb(size_t i);
        bool wrapToObject(size_t a, size_t b);
        bool wrapAGift();
        size_t run(size_t to_build = 10);
        void pressIn();
        void pressOut();
    private:
        ITable &_itable;
        IConveyorBelt &_iconveyor;
};

#endif /* !ELF_HPP_ */
