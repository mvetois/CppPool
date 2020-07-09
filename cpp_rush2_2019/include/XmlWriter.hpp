/*
** EPITECH PROJECT, 2019
** exec
** File description:
** XmlWriter.hpp
*/

#ifndef EXEC_XMLWRITER_HPP
#define EXEC_XMLWRITER_HPP

#include <fstream>
#include <stack>
#include "Object.hpp"

class XmlWriter
{
public:
    XmlWriter();
    ~XmlWriter() = default;

    void WriteOnFile(Object *object, const std::string &fileName);
    void openTag(Object *object);
    void writeTabs();
private:
    std::stack<std::string> _tag;
    std::ofstream _file;
    size_t _tabs;
};

#endif
