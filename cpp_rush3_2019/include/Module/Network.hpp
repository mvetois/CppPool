/*
** EPITECH PROJECT, 2019
** exec
** File description:
** Network.hpp
*/

#ifndef EXEC_NETWORK_HPP
#define EXEC_NETWORK_HPP
#include <ctime>
#include <list>
#include <iostream>
#include "Module.hpp"

class Network : public Module
{
public:
    Network(IMonitorDisplay &monitorDisplay, double width, double height);
    void updateThis() override;
    void initializeDrawable() override;
private:
    std::list<std::string> _ref;
};

#endif
