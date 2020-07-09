/*
** EPITECH PROJECT, 2020
** CPP Pool D14m
** File description:
** FruitNode
*/

#ifndef FRUITNODE_HPP_
#define FRUITNODE_HPP_

#include "Fruit.hpp"

class FruitNode {
    public:
        Fruit *content;
        FruitNode *next;
};

#endif /* !FRUITNODE_HPP_ */
