/*
** EPITECH PROJECT, 2019
** exec
** File description:
** Drawable.hpp
*/

#ifndef EXEC_DRAWABLE_HPP
#define EXEC_DRAWABLE_HPP

#include <SFML/Graphics.hpp>
#include "IMonitorDisplay.hpp"

class Module;

class Drawable
{
public:
    Drawable(IMonitorDisplay &monitorDisplay);
    virtual ~Drawable() = default;

    void drawThis();
    const sf::FloatRect &getRect();
    void setRect(sf::FloatRect rect);
protected:
    void (IMonitorDisplay::*_drawFunction)(Drawable *drawable);
    IMonitorDisplay &_monitorDisplay;
    sf::FloatRect _pos;
};

#endif
