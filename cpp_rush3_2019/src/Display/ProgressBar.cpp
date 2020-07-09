/*
** EPITECH PROJECT, 2019
** exec
** File description:
** ProgressBar.cpp
*/

#include "../../include/Display/ProgressBar.hpp"

ProgressBar::ProgressBar(IMonitorDisplay &monitorDisplay)
: Drawable(monitorDisplay)
{
    _drawFunction = (void(IMonitorDisplay::*)(Drawable*))&IMonitorDisplay::drawProgressBar;
    _monitorDisplay.initializeProgressBar(this);
    _name = "";
}

std::string ProgressBar::getUnits() const
{
    return (_units);
}

size_t ProgressBar::getMax() const
{
    return (_max);
}

size_t ProgressBar::getContent() const
{
    return (_content);
}

void ProgressBar::setUnits(std::string const str)
{
    _units = str;
}

void ProgressBar::setMax(size_t const str)
{
    _max = str;
}

void ProgressBar::setContent(size_t const str)
{
    _content = str;
}

std::string ProgressBar::getName() const
{
    return (_name);
}

void ProgressBar::setName(std::string const str)
{
    _name = str;
}