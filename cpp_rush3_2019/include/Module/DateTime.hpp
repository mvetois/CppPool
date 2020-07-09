/*
** EPITECH PROJECT, 2019
** exec
** File description:
** DateTime.hpp
*/

#ifndef EXEC_DATETIME_HPP
#define EXEC_DATETIME_HPP
#include <ctime>
#include "Module.hpp"

class DateTime : public Module
{
public:
    DateTime(IMonitorDisplay &monitorDisplay, double width, double height);
    void updateThis() override;
    void initializeDrawable() override;
private:

};

#endif
