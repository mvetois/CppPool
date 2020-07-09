/*
** EPITECH PROJECT, 2020
** CPP Pool D06
** File description:
** my_cat
*/

#include <fstream>
#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1) {
        std::cerr << "my_cat: Usage: ./my_cat file [...]" << std::endl;
        return (84);
    }
    for (int i = 1; i < argc; i++) {
        std::ifstream fs(argv[i] , std::fstream::in);
        if (!fs.is_open()) {
            std::cerr << "my_cat: " << argv[i] << ": No such file or directory" << std::endl;
            continue;
        }
        std::cout << fs.rdbuf();
        fs.close();
    }
}