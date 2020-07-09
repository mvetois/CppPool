/*
** EPITECH PROJECT, 2020
** CPP Pool D06
** File description:
** SickKoalaList
*/

#include "SickKoalaList.hpp"

SickKoalaList::SickKoalaList(SickKoala *sk)
{
    _sk = sk;
    _next = nullptr;
}

SickKoalaList::~SickKoalaList()
{
}

bool SickKoalaList::isEnd() {
    return !(bool) _next;
}

void SickKoalaList::append(SickKoalaList* next) {
    if (isEnd())
        _next = next;
    else
        _next->append(next);
}

SickKoala *SickKoalaList::getFromName(std::string name) {
    if (_sk && _sk->getName() == name)
        return _sk;
    else if (_next)
        return _next->getFromName(name);
    return NULL;
}

SickKoalaList *SickKoalaList::remove(SickKoalaList* remove) {
    SickKoalaList *current = this;
    SickKoalaList *previous = NULL;

    while (current) {
        if (current == remove) {
            if (previous) {
                previous->_next = current->_next;
                current->_next = NULL;
                return this;
            } else {
                previous = current->_next;
                current->_next = NULL;
                return previous;
            }
        }
        previous = current;
        current = current->_next;
    }
    return NULL;
}