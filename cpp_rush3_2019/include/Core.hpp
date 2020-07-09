/*
** EPITECH PROJECT, 2019
** _cpp_rush3_2019
** File description:
** Core.hpp
*/

#ifndef CPP_RUSH3_2019_CORE_HPP
#define CPP_RUSH3_2019_CORE_HPP

#include "Module/HostnameUsername.hpp"
#include "Module/DateTime.hpp"
#include "Module/MonitorCore.hpp"
#include "Module/SystemKernel.hpp"
#include "Module/Cpu.hpp"
#include "Module/Memory.hpp"
#include "Module/Network.hpp"
#include "Module/Uptime.hpp"
#include <SFML/Graphics.hpp>
#include <string>
#include <list>
#include "Module/IMonitorModule.hpp"
#include "Display/Sfml.hpp"
#include "Display/Ncurses.hpp"

class Core
{
public:
    Core();
    ~Core();

    void startCore(IMonitorDisplay::DisplayType type);
    void initializeModules();
    sf::FloatRect getModulePos(double width, double height, IMonitorModule *module);
    void loop();
private:
    std::list<IMonitorModule*> _components;
    IMonitorDisplay *_choosenDisplay;
    IMonitorDisplay::DisplayType _type;
};

#endif
