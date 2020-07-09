/*
** EPITECH PROJECT, 2019
** exec
** File description:
** HostnameUsername.cpp
*/

#include <iostream>
#include "../../include/Module/HostnameUsername.hpp"
#include "../../include/Display/Line.hpp"

HostnameUsername::HostnameUsername(IMonitorDisplay &monitorDisplay, double width, double height)
: Module(monitorDisplay, width, height, "Hostname and Username")
{}

void HostnameUsername::initializeDrawable()
{
    Module::initializeDrawable();
    addDrawable("Hostname", new Line(_monitorDisplay), sf::FloatRect(0, 0, 0, 0));
    addDrawable("Username", new Line(_monitorDisplay), sf::FloatRect(0, 25, 0, 0));
}

void HostnameUsername::updateThis()
{
    ((Line *)_content.at("Hostname"))->setContent(getenv("HOSTNAME"));
    ((Line *)_content.at("Username"))->setContent(getenv("USER"));
}