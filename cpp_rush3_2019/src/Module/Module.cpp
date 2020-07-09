/*
** EPITECH PROJECT, 2019
** exec
** File description:
** Module.cpp
*/

#include <iostream>
#include "../../include/Module/Module.hpp"

Module::Module(IMonitorDisplay &monitorDisplay, double width, double height, std::string name)
: _monitorDisplay(monitorDisplay), _heightRaw(height), _widthRaw(width), _name(name)
{}

Module::~Module()
{
    _content.clear();
}

void Module::initializeDrawable()
{
    _monitorDisplay.initializeModule(this);
}

void Module::addDrawable(const std::string &str, Drawable *drawable, sf::FloatRect rect)
{
    if (_monitorDisplay.getType() == IMonitorDisplay::NCURSES)
        drawable->setRect(sf::FloatRect(rect.left * _rect.width, rect.top * _rect.height, rect.width * _rect.width, rect.height * _rect.height));
    else {
        drawable->setRect(rect);
    }
    _content.insert(std::pair<const std::string &, Drawable *>(str, drawable));
}

void Module::drawThis()
{
    _monitorDisplay.drawModule(this);
    for (auto item : _content)
        item.second->drawThis();
}

double Module::getRawWidth()
{
    return _widthRaw;
}

double Module::getRawHeight()
{
    return _heightRaw;
}

void Module::setRect(sf::FloatRect rect)
{
    _rect = rect;
}

sf::FloatRect &Module::getRect()
{
    return _rect;
}

std::string Module::getName() const
{
    return (_name);
}