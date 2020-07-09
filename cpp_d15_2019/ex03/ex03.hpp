/*
** EPITECH PROJECT, 2020
** CPP Pool 15
** File description:
** ex03
*/

#ifndef EX03_HPP_
#define EX03_HPP_
#include <iostream>

template<typename T>
void print(const T &print)
{
    std::cout << print << std::endl;
}

template<typename T>
void foreach(const T *tab, void (func)(const T &), int size)
{
    for (int i = 0; i < size; i++)
        (*func)(tab[i]);
}

#endif /* !EX03_HPP_ */

