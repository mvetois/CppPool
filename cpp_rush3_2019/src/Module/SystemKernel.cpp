/*
** EPITECH PROJECT, 2019
** exec
** File description:
** SystemKernel.cpp
*/

#include "../../include/Module/SystemKernel.hpp"
#include "../../include/Display/Line.hpp"

SystemKernel::SystemKernel(IMonitorDisplay &monitorDisplay, double width, double height)
: Module(monitorDisplay, width, height, "System")
{}

void SystemKernel::initializeDrawable()
{
    Module::initializeDrawable();
    addDrawable("System", new Line(_monitorDisplay), sf::FloatRect(-385, 20, 0, 0));
    addDrawable("Kernel", new Line(_monitorDisplay), sf::FloatRect(-320, 22, 0, 0));
}

void SystemKernel::updateThis()
{
    struct utsname unameData;

    uname(&unameData);

    ((Line *)_content.at("System"))->setContent(unameData.sysname);
    ((Line *)_content.at("Kernel"))->setContent(unameData.release);
}