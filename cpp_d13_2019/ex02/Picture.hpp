/*
** EPITECH PROJECT, 2020
** CPP Pool D13
** File description:
** Picture
*/

#ifndef PICTURE_HPP_
#define PICTURE_HPP_
#include <iostream>
#include <fstream>
#include <sstream>

class Picture {
    public:
        Picture(const std::string &file);
        bool getPictureFromFile(const std::string &file);
        std::string data;
};

#endif /* !PICTURE_HPP_ */
