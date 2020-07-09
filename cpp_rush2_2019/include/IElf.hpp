/*
** EPITECH PROJECT, 2020
** CPP Pool Rush2
** File description:
** IElf
*/

#ifndef IELF_HPP_
#define IELF_HPP_

#include "Object.hpp"
#include <vector>

class IElf {
    public:
        virtual ~IElf() = default;
        virtual bool mvCbTable() = 0;
        virtual bool mvTableCb(size_t i) = 0;
        virtual bool wrapToObject(size_t a, size_t b) = 0;
        virtual bool wrapAGift() = 0;
        virtual size_t run(size_t to_build) = 0;
        virtual void pressIn() = 0;
        virtual void pressOut() = 0;
    protected:
    private:
};

#endif /* !IELF_HPP_ */
