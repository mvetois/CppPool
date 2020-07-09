/*
** EPITECH PROJECT, 2020
** CPP Pool D14m
** File description:
** main
*/

#include "Banana.hpp"
#include "Lemon.hpp"

int main()
{
    Lemon l;
    Banana b;
    std::cout << l.getVitamins () << std::endl;
    std::cout << b.getVitamins () << std::endl;
    std::cout << l.getName () << std::endl;
    std::cout << b.getName () << std::endl;

    Fruit &f = l;
    std::cout << f.getVitamins() << std::endl;
    std::cout << f.getName() << std::endl;
    return (0);
}