/*
** EPITECH PROJECT, 2019
** exec
** File description:
** Cpu.cpp
*/
#include <fstream>
#include <sstream>
#include <iostream>
#include "../../include/Module/Cpu.hpp"
#include "../../include/Display/Line.hpp"
#include "../../include/Display/ProgressBar.hpp"

Cpu::Cpu(IMonitorDisplay &monitorDisplay, double width, double height)
: Module(monitorDisplay, width, height, "CPU")
{}

void Cpu::initializeDrawable()
{
    Module::initializeDrawable();
    addDrawable("cpu-name", new Line(_monitorDisplay), sf::FloatRect(0, 0, 0, 0));
    addDrawable("cpu-core", new Line(_monitorDisplay), sf::FloatRect(0, 25, 0, 0));
}

void Cpu::updateThis()
{
    std::ifstream fileStat("/proc/cpuinfo");

    std::string line;
    std::string name;
    std::string core;
    const std::string str_cpu = "model name";
    const std::size_t len_cpu = str_cpu.size();
    const std::string str_pro = "processor";
    const std::size_t len_pro = str_pro.size();
    while(std::getline(fileStat, line)) {
        if (!line.compare(0, len_cpu, str_cpu)) {
            line.erase(0, line.find(": "));
            line.erase(0, 2);
            name = line;
        }
        if (!line.compare(0, len_pro, str_pro)) {
            line.erase(0, line.find(": "));
            line.erase(0, 2);
            core = line;
        }
    }
    ((Line *)_content.at("cpu-name"))->setContent(name);
    ((Line *)_content.at("cpu-core"))->setContent(std::to_string(std::stoi(core) + 1) + " Cores (" + std::to_string((std::stoi(core) + 1) / 2) + " Physical)");
}