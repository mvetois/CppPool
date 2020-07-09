/*
** EPITECH PROJECT, 2019
** exec
** File description:
** Line.hpp
*/

#ifndef EXEC_LINE_HPP
#define EXEC_LINE_HPP

#include "Drawable.hpp"

class Line : public Drawable
{
public:
    Line(IMonitorDisplay &monitorDisplay);

    ~Line() override = default;
    void setContent(std::string const str);
    std::string getContent() const;
protected:
    std::string _content;
};

#endif
