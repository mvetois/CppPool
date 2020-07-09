/*
** EPITECH PROJECT, 2019
** cpp_rush2_2019
** File description:
** main.cpp
*/

#include <iostream>
#include "../include/Object.hpp"
#include "../include/Wrap.hpp"
#include "../include/Toy.hpp"
#include "../include/SantaFactory.hpp"

int main(int ac, char **av)
{
    int nbr = 1;
    std::string diretory = "";
    SantaFactory factory;

    if (ac >= 2)
        nbr = atoi(av[1]);
    if (ac >= 3)
        diretory = av[2];
    srand(time(nullptr));
    std::ofstream test;
    factory.BuildGift(nbr, diretory);
    return 0;
}