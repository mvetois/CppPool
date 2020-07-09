/*
** EPITECH PROJECT, 2020
** CPP Pool D17
** File description:
** OneTime
*/

#ifndef ONETIME_HPP_
#define ONETIME_HPP_


#include <string>
#include <iostream>

#include "IEncryptionMethod.hpp"

class OneTime : public IEncryptionMethod {
    public:
        OneTime(std::string key);
        virtual ~OneTime();

        virtual void encryptChar(char plainchar);
        virtual void decryptChar(char cipherchar);
        virtual void reset();
    protected:
        std::string _key;
        int _index;

};

#endif /* !ONETIME_HPP_ */
