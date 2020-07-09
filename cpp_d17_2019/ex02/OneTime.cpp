/*
** EPITECH PROJECT, 2020
** CPP Pool d17
** File description:
** OneTime
*/

#include "OneTime.hpp"

OneTime::OneTime(std::string key)
{
    _key = key;
    _index = 0;
}

OneTime::~OneTime()
{
}

void OneTime::encryptChar(char plainchar)
{
    int minmaj = 0;
    int keyminmaj = 0;

    if (isalpha(plainchar)) {
        if (plainchar > 'a' - 1)
            minmaj = 'a';
        else
            minmaj = 'A';
        if (_key[_index] > 'a' - 1)
            keyminmaj = 'a';
        else
            keyminmaj = 'A';
        plainchar = (plainchar - minmaj + (_key[_index] - keyminmaj)) % 26 + minmaj;
    }
    std::cout << plainchar;
    _index = (_index + 1) % _key.size();
}

void OneTime::decryptChar(char cipherchar)
{
    int minmaj = 0;
    int keyminmaj = 0;

    if (isalpha(cipherchar)) {
        if (cipherchar > 'a' - 1)
            minmaj = 'z';
        else
            minmaj = 'Z';
        if (_key[_index] > 'a' - 1)
            keyminmaj = 'a';
        else
            keyminmaj = 'A';
        cipherchar = (cipherchar - minmaj - (_key[_index] - keyminmaj)) % 26 + minmaj;
    }
    std::cout << cipherchar;
    _index = (_index + 1) % _key.size();
}

void OneTime::reset() {
    _index = 0;
}
