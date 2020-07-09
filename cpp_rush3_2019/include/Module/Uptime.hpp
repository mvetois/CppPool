/*
** EPITECH PROJECT, 2019
** exec
** File description:
** Uptime.hpp
*/

#ifndef EXEC_UPTIME_HPP
#define EXEC_UPTIME_HPP
#include <ctime>
#include "Module.hpp"

class Uptime : public Module
{
public:
    Uptime(IMonitorDisplay &monitorDisplay, double width, double height);
    void updateThis() override;
    void initializeDrawable() override;
private:

};

#endif
