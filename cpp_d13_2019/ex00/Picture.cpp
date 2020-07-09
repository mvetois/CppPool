/*
** EPITECH PROJECT, 2020
** CPP Pool D13
** File description:
** Picture
*/

#include "Picture.hpp"

Picture::Picture(const std::string &file)
{
    std::stringstream tmp;
    std::ifstream fs(file , std::fstream::in);

    if (file == "") {
        data = "";
        return;
    }
    if (!fs.is_open()) {
        data = "ERROR";
        return;
    }
    tmp << fs.rdbuf();
    data = tmp.str();
    fs.close();
}

bool Picture::getPictureFromFile(const std::string &file)
{
    std::stringstream tmp;
    std::ifstream fs(file , std::fstream::in);

    if (!fs.is_open()) {
        data = "ERROR";
        return (false);
    }
    tmp << fs.rdbuf();
    data = tmp.str();
    fs.close();
    return (true);
}