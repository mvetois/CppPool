/*
** EPITECH PROJECT, 2020
** CPP Pool D17
** File description:
** Encryption
*/

#ifndef ENCRYPTION_HPP_
#define ENCRYPTION_HPP_
#include <iostream>
#include <algorithm>
#include "IEncryptionMethod.hpp"

typedef void (IEncryptionMethod::*IEM)(char c);
class Encryption {
    public:
        Encryption(IEncryptionMethod &iem, IEM mt);
        ~Encryption();
        void operator()(char c);

        static void encryptString(IEncryptionMethod &encryptionMethod, const std::string &toEncrypt);
        static void decryptString(IEncryptionMethod &encryptionMethod, const std::string &toDecrypt);
    protected:
            IEncryptionMethod *_iem;
            IEM _mt;
};

#endif /* !ENCRYPTION_HPP_ */
