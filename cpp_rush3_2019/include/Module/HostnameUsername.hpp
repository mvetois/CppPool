/*
** EPITECH PROJECT, 2019
** exec
** File description:
** HostnameUsername.hpp
*/

#ifndef EXEC_HOSTNAMEUSERNAME_HPP
#define EXEC_HOSTNAMEUSERNAME_HPP

#include "Module.hpp"

class HostnameUsername : public Module
{
public:
    HostnameUsername(IMonitorDisplay &monitorDisplay, double width, double height);
    void updateThis() override;
    void initializeDrawable() override;
private:

};

#endif
