/*
** EPITECH PROJECT, 2019
** exec
** File description:
** XmlReader.cpp
*/

#include "../include/XmlReader.hpp"
#include <iostream>

Object* XmlReader::readFile(const std::string &fileName)
{
    Object *result;
    openFile(fileName);
    if (!_file.is_open())
        return nullptr;
    result = fillObject();
    closeFile();
    return result;
}

Object *XmlReader::fillObject()
{
    Object *to_add = nullptr;
    Object *result = nullptr;
    Object *last = nullptr;
    ObjType Type = XmlReader::NAME;

    while (nextLine()) {
        while (!_line.empty()) {
            cleanLine();
            switch (findTag()) {
                case BOX :
                    to_add = new(Box);
                    ((Box *)to_add)->openMe();
                    break;
                case GIFT_PAPER :
                    to_add = new(GiftPaper);
                    break;
                case TEDDY :Type = TEDDY;
                    break;
                case LITTLE_PONY :Type = LITTLE_PONY;
                    break;
                case NAME :
                    if (Type == TEDDY) {
                        to_add = new Teddy(_line.substr(0, _line.find("</name>")));
                    } else if (Type == LITTLE_PONY) {
                        to_add =
                            new LittlePony(_line.substr(0, _line.find("</name>")));
                    }
                    ((Wrap *)last)->wrapMeThat(to_add);
                    return result;
                default: return result;
            }
            if (!to_add)
                break;
            if (!result) {
                result = to_add;
                last = result;
            } else {
                ((Wrap *)last)->wrapMeThat(to_add);
                last = to_add;
            }
            to_add = nullptr;
        }
    }
    return result;
}

void XmlReader::openFile(const std::string &fileName)
{
    _file.open(fileName);
}

void XmlReader::closeFile()
{
    _file.close();
}

XmlReader::ObjType XmlReader::findTag()
{
    const std::string tags[5] = {
        "<Box>",
        "<GiftPaper>",
        "<Teddy>",
        "<LittlePony>",
        "<name>"
    };
    for (int it = 0; it < 5; it++) {
        if (_line.find(tags[it]) == 0) {
            _line = _line.substr(tags[it].size());
            return (ObjType) it;
        }
    }
    return END;
}

void XmlReader::cleanLine()
{
    while (!_line.empty() && (_line[0] ==  ' ' || _line[0] == '\t'))
        _line = _line.substr(1);
}

bool XmlReader::nextLine()
{
    if (getline(_file, _line))
        return true;
    return false;
}