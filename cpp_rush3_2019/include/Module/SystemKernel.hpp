/*
** EPITECH PROJECT, 2019
** exec
** File description:
** SystemKernel.hpp
*/

#ifndef EXEC_SYSTEMKERNEL_HPP
#define EXEC_SYSTEMKERNEL_HPP
#include <sys/utsname.h>
#include "Module.hpp"

class SystemKernel : public Module
{
public:
    SystemKernel(IMonitorDisplay &monitorDisplay, double width, double height);
    void updateThis() override;
    void initializeDrawable() override;
private:

};

#endif
