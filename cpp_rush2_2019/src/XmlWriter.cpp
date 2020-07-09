/*
** EPITECH PROJECT, 2019
** exec
** File description:
** XmlWriter.cpp
*/

#include <iostream>
#include "../include/XmlWriter.hpp"

XmlWriter::XmlWriter() : _tag(std::stack<std::string>()), _file(std::ofstream()), _tabs(0)
{}

void XmlWriter::writeTabs()
{
    for (size_t it = 0; it < _tabs; it++)
        _file << "\t";
}

void XmlWriter::openTag(Object *object)
{
    writeTabs();
    _file << "<" << object->getType() << ">" << std::endl;
    _tag.push(object->getType());
    _tabs++;
    if (!object->getObject() && (object->getType() == "Teddy" || object->getType() == "LittlePony")) {
        writeTabs();
        _file << "<name>" << object->getName() << "</name>" << std::endl;
    } else if (object->getObject()) {
        openTag(object->getObject());
    }
    _tabs--;
    writeTabs();
    _file << "</" << _tag.top() << ">" << std::endl;
    _tag.pop();
}

void XmlWriter::WriteOnFile(Object *object, const std::string &fileName)
{
    _file.open(fileName, std::ofstream::out | std::ofstream::app);
    if (!_file.is_open())
        return;
    openTag(object);
    _file.close();
}