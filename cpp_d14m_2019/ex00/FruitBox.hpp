/*
** EPITECH PROJECT, 2020
** CPP Pool D14m
** File description:
** FruitBox
*/

#ifndef FRUITBOX_HPP_
#define FRUITBOX_HPP_
#include "Fruit.hpp"
#include "FruitNode.hpp"

class FruitBox {
    public:
        FruitBox(int size);
        FruitNode *head() const;
        int nbFruits() const;
        bool putFruit(Fruit *fruit);
        Fruit *pickFruit();
    private:
        int _size;
        int _count;
        FruitNode *_header;
};

#endif /* !FRUITBOX_HPP_ */
