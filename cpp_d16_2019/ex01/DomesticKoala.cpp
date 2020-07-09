/*
** EPITECH PROJECT, 2020
** CPP Pool D16
** File description:
** DomesticKoala
*/

#include "DomesticKoala.hpp"

DomesticKoala::DomesticKoala(KoalaAction &k) : _act(k), _vect(255)
{
}

DomesticKoala::DomesticKoala(const DomesticKoala &copy) : _act(copy._act), _vect(copy._vect)
{
}

DomesticKoala::~DomesticKoala()
{}

DomesticKoala &DomesticKoala::operator=(const DomesticKoala &copy)
{
    _act = copy._act;
    _vect = copy._vect;
    return(*this);
}

std::vector<DomesticKoala::methodPointer_t> const *DomesticKoala::getAction() const
{
    return (&_vect);
}

void DomesticKoala::learnAction(unsigned char c, methodPointer_t ptr)
{
    _vect[c] = ptr;
}

void DomesticKoala::unlearnAction(unsigned char c)
{
    _vect[c] = NULL;
}

void DomesticKoala::doAction(unsigned char c, const std::string &str)
{
    methodPointer_t func = _vect[c];
    if (func)
        (_act.*func)(str);
}

void DomesticKoala::setKoalaAction(KoalaAction &k)
{
    _act = k;
}