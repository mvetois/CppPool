/*
** EPITECH PROJECT, 2020
** CPP Pool D17
** File description:
** Cesar
*/

#include "Cesar.hpp"

Cesar::Cesar() : _nb(3)
{
}

Cesar::~Cesar()
{
}

void Cesar::encryptChar(char plainchar)
{
    if (plainchar >= 'A' && plainchar <= 'Z')
        plainchar = 'A' + ((plainchar - 'A' + _nb) % 26);
    if (plainchar >= 'a' && plainchar <= 'z')
        plainchar = 'a' + ((plainchar - 'a' + _nb) % 26);
    std::cout << plainchar;
    _nb++;
}

void Cesar::decryptChar(char cipherchar)
{
    if (cipherchar >= 'A' && cipherchar <= 'Z') {
        cipherchar = (cipherchar - 'A' - _nb) % 26;
        if (cipherchar < 0)
            cipherchar += 26;
        cipherchar += 'A';
    }
    if (cipherchar >= 'a' && cipherchar <= 'z') {
        cipherchar = (cipherchar - 'a' - _nb) % 26;
        if (cipherchar < 0)
            cipherchar += 26;
        cipherchar += 'a';
    }
    std::cout << cipherchar;
    _nb++;
}

void Cesar::reset()
{
    _nb = 3;
}