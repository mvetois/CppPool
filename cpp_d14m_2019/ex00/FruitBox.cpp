/*
** EPITECH PROJECT, 2020
** CPP Pool D14m
** File description:
** FruitBox
*/

#include "FruitBox.hpp"

FruitBox::FruitBox(int size)
{
    _size = size;
}

FruitNode *FruitBox::head() const
{
    return (_header);
}

int FruitBox::nbFruits() const
{
    return (_count);
}

bool FruitBox::putFruit(Fruit *fruit)
{
    FruitNode *tmp;
    FruitNode *n_elem;
    int nb = 1;

    if (_size < 1)
      return(false);
    if (_header == NULL) {
        _header = new FruitNode;
        _header->content = fruit;
        _header->next = NULL;
        _count++;
        return(true);
    }
    tmp = _header;
    while (tmp->next != NULL) {
        if ((tmp->content == fruit) || (nb >= _size))
            return(false);
        tmp = tmp->next;
        nb++;
    }
    if (nb >= _size || tmp->content == fruit)
        return(false);
    n_elem = new FruitNode;
    n_elem->content = fruit;
    n_elem->next = NULL;
    tmp->next = n_elem;
    _count++;
    return(true);
}

Fruit *FruitBox::pickFruit()
{
    FruitNode *t;
    Fruit *f;

    if (_header == NULL)
        return(NULL);
    t = _header;
    f = _header->content;
    _header = _header->next;
    delete t;
    _count--;
    return(f);
}