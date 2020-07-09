/*
** EPITECH PROJECT, 2019
** _cpp_rush3_2019
** File description:
** Core.cpp
*/

#include <iostream>
#include <thread>
#include <chrono>
#include "../include/Core.hpp"

Core::Core() : _components(0), _choosenDisplay(nullptr)
{}

Core::~Core()
{
    _components.clear();
    delete(_choosenDisplay);
}

sf::FloatRect Core::getModulePos(double width, double height, IMonitorModule *module)
{
    sf::Vector2u size = _choosenDisplay->getWindowSize();
    sf::Vector2f count{0, 0};
    double maxHeight = 0;

    for (auto item : _components) {
        maxHeight = maxHeight > item->getRawHeight() ? maxHeight : item->getRawHeight();
        if (module == item) {
            break;
        }
        count.x += item->getRawWidth();
        if (count.x >= 1) {
            count.x = 0;
            count.y += maxHeight;
            maxHeight = 0;
        }
    }
    return sf::FloatRect(count.x * size.x,
                             count.y * size.y,
                             (float) width * size.x,
                             (float) height * size.y);
}

void Core::initializeModules()
{

    _components.push_back(new HostnameUsername(*_choosenDisplay, 0.5, 0.1));
    _components.push_back(new DateTime(*_choosenDisplay, 0.5, 0.1));
    _components.push_back(new MonitorCore(*_choosenDisplay, 0.5, 0.2));
    _components.push_back(new SystemKernel(*_choosenDisplay, 0.5, 0.1));
    _components.push_back(new Cpu(*_choosenDisplay, 0.5, 0.1));
    _components.push_back(new Memory(*_choosenDisplay, 0.5, 0.1));
    _components.push_back(new Network(*_choosenDisplay, 0.5, 0.1));
    _components.push_back(new Uptime(*_choosenDisplay, 0.5, 0.1));
    for (auto item : _components) {
        item->setRect(getModulePos(item->getRawWidth(), item->getRawHeight(), item));
        item->initializeDrawable();
    }
}

void Core::startCore(IMonitorDisplay::DisplayType type)
{
    switch (type) {
        case IMonitorDisplay::SFML :
            _choosenDisplay = new Sfml();
            break;
        case IMonitorDisplay::NCURSES :
            _choosenDisplay = new Ncurses();
            break;
    }
    _type = type;
    initializeModules();
    loop();
}

void Core::loop()
{
	timeout(1);
    while (_choosenDisplay->isRunning()) {
        for (auto item : _components) {
                item->updateThis();
                item->drawThis();
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
        if (_choosenDisplay->chageDisplayMode()) {
            delete _choosenDisplay;
            if (_type == IMonitorDisplay::NCURSES) {
                _type = IMonitorDisplay::SFML;
                _choosenDisplay = new Sfml();
            } else {
                _type = IMonitorDisplay::NCURSES;
                _choosenDisplay = new Ncurses();
            }
            _components.clear();
            initializeModules();
        }
    }
}