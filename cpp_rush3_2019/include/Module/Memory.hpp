/*
** EPITECH PROJECT, 2019
** exec
** File description:
** Memory.hpp
*/

#ifndef EXEC_MEMORY_HPP
#define EXEC_MEMORY_HPP
#include <ctime>
#include "Module.hpp"

class Memory : public Module
{
public:
    Memory(IMonitorDisplay &monitorDisplay, double width, double height);
    void updateThis() override;
    void initializeDrawable() override;
private:

};

#endif
