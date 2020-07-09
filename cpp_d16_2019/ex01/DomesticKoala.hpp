/*
** EPITECH PROJECT, 2020
** CPP Pool D16
** File description:
** DomesticKoala
*/

#ifndef DOMESTICKOALA_HPP_
#define DOMESTICKOALA_HPP_
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "KoalaAction.hpp"

class DomesticKoala {
    public:
        typedef void (KoalaAction::*methodPointer_t)(const std::string &);
        ~DomesticKoala();
        DomesticKoala(KoalaAction &k);
        DomesticKoala(const DomesticKoala &copy);
        DomesticKoala &operator=(const DomesticKoala &copy);
        std::vector<methodPointer_t> const * getAction() const;
        void learnAction(unsigned char c, methodPointer_t ptr);
        void unlearnAction(unsigned char c);
        void doAction(unsigned char c, const std::string &str);
        void setKoalaAction(KoalaAction &k);
    protected:
        KoalaAction _act;
        std::vector<methodPointer_t> _vect;
};

#endif /* !DOMESTICKOALA_HPP_ */
