/*
** EPITECH PROJECT, 2019
** exec
** File description:
** Cpu.hpp
*/

#ifndef EXEC_CPU_HPP
#define EXEC_CPU_HPP
#include <ctime>
#include "Module.hpp"

class Cpu : public Module
{
public:
    Cpu(IMonitorDisplay &monitorDisplay, double width, double height);
    void updateThis() override;
    void initializeDrawable() override;
private:

};

#endif
