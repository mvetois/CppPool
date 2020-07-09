/*
** EPITECH PROJECT, 2019
** exec
** File description:
** XmlReader.hpp
*/

#ifndef EXEC_XMLREADER_HPP
#define EXEC_XMLREADER_HPP

#include <stack>
#include <string>
#include <fstream>
#include "Object.hpp"
#include "Teddy.hpp"
#include "LittlePony.hpp"
#include "Box.hpp"
#include "GiftPaper.hpp"

class XmlReader
{
public:
    XmlReader() = default;
    ~XmlReader() = default;

    enum ObjType {
        BOX = 0,
        GIFT_PAPER = 1,
        TEDDY = 2,
        LITTLE_PONY = 3,
        NAME = 4,
        END = 5
    };

    Object *readFile(const std::string &fileName);
    Object *fillObject();
    bool nextLine();
    ObjType findTag();
    void cleanLine();
    void openFile(const std::string &fileName);
    void closeFile();
private:
    std::ifstream _file;
    std::string _line;
};

#endif
