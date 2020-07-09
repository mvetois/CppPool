/*
** EPITECH PROJECT, 2020
** CPP Pool D07A
** File description:
** KoalaBot
*/

#ifndef KOALABOT_HPP_
#define KOALABOT_HPP_
#include "Parts.hpp"

class KoalaBot {
    public:
        KoalaBot(std::string serial = "Bob-01");
        void setParts(Head &head);
        void setParts(Arms &arms);
        void setParts(Legs &legs);
        void swapParts(Head &head);
        void swapParts(Arms &arms);
        void swapParts(Legs &legs);
        void informations();
        bool status();
    private:
        Head _head;
        Arms _arms;
        Legs _legs;
        std::string _serial;
};

#endif /* !KOALABOT_HPP_ */
