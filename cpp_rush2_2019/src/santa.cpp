/*
** EPITECH PROJECT, 2020
** CPP Pool Rush2
** File description:
** santa
*/

#include "../include/santa.hpp"

int santa(int argc, char **argv)
{
    XmlReader x;
    Object *file;

    if (argc <= 1) {
        std::cout << "Usage : ./santa filename [...]" << std::endl;
        return (0);
    }
    for (int i = 1; i < argc; i++) {
        file = x.readFile((std::string)argv[i]);
        if (!file)
            continue;
        std::cout << "[" << argv[i] << "] -> ";
        while (file) {
            if (file->getType() == "Little Pony" || file->getType() == "Teddy")
                std::cout << file->getType() << " : " << file->getName();
            else
                std::cout << file->getType();
            file = file->getObject();
            if (file)
                std::cout << " -> ";
        }
        std::cout  << std::endl;
    }
    return (0);
}