/*
** EPITECH PROJECT, 2020
** CPP Pool D17
** File description:
** Cesar
*/

#ifndef CESAR_HPP_
#define CESAR_HPP_
#include <iostream>
#include "IEncryptionMethod.hpp"

class Cesar : public IEncryptionMethod {
    public:
        Cesar();
        ~Cesar();
        void encryptChar(char plainchar);
        void decryptChar(char cipherchar);
        void reset();
    protected:
        int _nb = 3;
    private:
};

#endif /* !CESAR_HPP_ */
