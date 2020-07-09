/*
** EPITECH PROJECT, 2020
** CPP Pool D15
** File description:
** ex02
*/

#ifndef EX02_HPP_
#define EX02_HPP_
#include <iostream>

int min(int a, int b)
{
    std::cout << "non-template min" << std::endl;
    if (a > b)
        return (b);
    return (a);
}

template<typename T>
const T &min(const T &a, const T &b)
{
    std::cout << "template min" << std::endl;
    if (a > b)
        return (b);
    return (a);
}

int nonTemplateMin(int *tab, int size)
{
    int m = tab[0];
    for (int i = 1; i < size; i++)
        m = min(m, tab[i]);
    return(m);
}

template<typename T>
const T & templateMin(const T *tab, int size) {
    T &m = const_cast<T&>(tab[0]);
    for (int i = 1; i < size; i++)
        m = min<T>(m, tab[i]);
    return(m);
}

#endif /* !EX02_HPP_ */

