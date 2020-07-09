/*
** EPITECH PROJECT, 2019
** exec
** File description:
** DateTime.cpp
*/

#include "../../include/Module/DateTime.hpp"
#include "../../include/Display/Line.hpp"

DateTime::DateTime(IMonitorDisplay &monitorDisplay, double width, double height)
: Module(monitorDisplay, width, height, "Date")
{}

void DateTime::initializeDrawable()
{
    Module::initializeDrawable();
    addDrawable("DateTime", new Line(_monitorDisplay), sf::FloatRect(-385, 540, 0, 0));
}

void DateTime::updateThis()
{
    time_t now = time(0);

    ((Line *)_content.at("DateTime"))->setContent(ctime(&now));
}