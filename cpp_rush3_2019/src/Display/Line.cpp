/*
** EPITECH PROJECT, 2019
** exec
** File description:
** Line.cpp
*/

#include "../../include/Display/Line.hpp"

Line::Line(IMonitorDisplay &monitorDisplay)
: Drawable(monitorDisplay)
{
    _drawFunction = (void(IMonitorDisplay::*)(Drawable*))&IMonitorDisplay::drawLine;
    _monitorDisplay.initializeLine(this);
}

void Line::setContent(std::string const str)
{
    _content = str;
}

std::string Line::getContent() const
{
    return (_content);
}
