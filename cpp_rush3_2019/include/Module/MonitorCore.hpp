/*
** EPITECH PROJECT, 2019
** exec
** File description:
** MonitorCore.hpp
*/

#ifndef EXEC_MONITORCORE_HPP
#define EXEC_MONITORCORE_HPP
#include <fstream>
#include <sstream>
#include <thread>
#include <chrono>
#include "Module.hpp"

typedef struct CPUData
{
    std::string cpu;
    size_t times[10];
} CPUData;

enum CPUStates
{
	S_USER = 0,
	S_NICE,
	S_SYSTEM,
	S_IDLE,
	S_IOWAIT,
	S_IRQ,
	S_SOFTIRQ,
	S_STEAL,
	S_GUEST,
	S_GUEST_NICE
};

class MonitorCore : public Module
{
public:
    MonitorCore(IMonitorDisplay &monitorDisplay, double width, double height);
    void updateThis() override;
    void initializeDrawable() override;
private:

};

#endif
