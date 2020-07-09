/*
** EPITECH PROJECT, 2019
** exec
** File description:
** Drawable.cpp
*/

#include <glob.h>
#include <iostream>
#include "../../include/Display/Drawable.hpp"

Drawable::Drawable(IMonitorDisplay &monitorDisplay)
: _drawFunction(nullptr), _monitorDisplay(monitorDisplay), _pos()
{}

void Drawable::drawThis()
{
    (_monitorDisplay.*_drawFunction)(this);
}

void Drawable::setRect(sf::FloatRect rect)
{
    _pos = rect;
}

const sf::FloatRect& Drawable::getRect()
{
    return _pos;
}