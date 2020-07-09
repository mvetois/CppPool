/*
** EPITECH PROJECT, 2019
** _cpp_rush3_2019
** File description:
** Drawable.hpp
*/

#ifndef CPP_RUSH3_2019_DRAWABLE_HPP
#define CPP_RUSH3_2019_DRAWABLE_HPP

class IMonitorModule
{
public:
    virtual ~IMonitorModule() = default;

    virtual void drawThis() = 0;
    virtual void updateThis() = 0;
    virtual double getRawHeight() = 0;
    virtual double getRawWidth() = 0;
    virtual void setRect(sf::FloatRect rect) = 0;
    virtual void initializeDrawable() = 0;
};

#endif
