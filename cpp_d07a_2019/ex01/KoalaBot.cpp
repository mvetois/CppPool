/*
** EPITECH PROJECT, 2020
** CPP Pool D07A
** File description:
** KoalaBot
*/

#include "KoalaBot.hpp"

KoalaBot::KoalaBot(std::string serial)
{
    _serial = serial;
}

void KoalaBot::setParts(Head &head) {
    _head = head;
}
void KoalaBot::setParts(Arms &arms) {
    _arms = arms;
}

void KoalaBot::setParts(Legs &legs) {
    _legs = legs;
}

void KoalaBot::swapParts(Head &head) {
    setParts(head);
}

void KoalaBot::swapParts(Arms &arms) {
    setParts(arms);
}

void KoalaBot::swapParts(Legs &legs) {
    setParts(legs);
}

void KoalaBot::informations() {
    std::cout << "[KoalaBot] " << _serial << std::endl;
    _arms.informations();
    _legs.informations();
    _head.informations();
}

bool KoalaBot::status() {
    return _arms.isFunctional() && _legs.isFunctional() && _head.isFunctional();
}