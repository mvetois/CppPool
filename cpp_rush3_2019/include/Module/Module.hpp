/*
** EPITECH PROJECT, 2019
** _cpp_rush3_2019
** File description:
** Module.hpp
*/

#ifndef CPP_RUSH3_2019_COMPONENT_HPP
#define CPP_RUSH3_2019_COMPONENT_HPP

#include <SFML/Graphics.hpp>
#include <algorithm>
#include <string>
#include <map>
#include "../Display/Drawable.hpp"
#include "IMonitorModule.hpp"
#include "../Display/IMonitorDisplay.hpp"

class Drawable;

class Module : public IMonitorModule
{
public:
    Module(IMonitorDisplay &monitorDisplay, double width, double height, std::string name = "");
    ~Module() override;

    void addDrawable(const std::string &, Drawable *drawable, sf::FloatRect rect);
    void drawThis() override;

    void initializeDrawable() override;
    double getRawHeight() override;
    double getRawWidth() override;
    void setRect(sf::FloatRect rect) override;
    sf::FloatRect &getRect();
    std::string getName() const;

protected:
    IMonitorDisplay &_monitorDisplay;
    sf::FloatRect _rect;
    double _heightRaw;
    double _widthRaw;
    std::map<std::string, Drawable*> _content;
    std::string _name;
};

#endif
