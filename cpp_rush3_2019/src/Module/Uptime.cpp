/*
** EPITECH PROJECT, 2019
** exec
** File description:
** Uptime.cpp
*/
#include <fstream>
#include <sstream>
#include <iostream>
#include "../../include/Module/Uptime.hpp"
#include "../../include/Display/Line.hpp"
#include "../../include/Display/ProgressBar.hpp"

Uptime::Uptime(IMonitorDisplay &monitorDisplay, double width, double height)
: Module(monitorDisplay, width, height, "Uptime")
{}

void Uptime::initializeDrawable()
{
    addDrawable("Uptime", new Line(_monitorDisplay), sf::FloatRect(-385, 285, 0, 0));
}

void Uptime::updateThis()
{
    std::ifstream fileStat("/proc/uptime");

    std::string line;
    int sec;
    int min;
    int hou;
    std::string out;
    while(std::getline(fileStat, line)) {
            line.erase(line.find(" "), line.size());
            sec = std::stoi(line);
    }
    min = sec / 60;
    sec %= 60;
    hou = min / 60;
    min %= 60;
    if (hou < 10)
        out = "0";
    out += std::to_string(hou) + ":";
    if (min < 10)
        out += "0";
    out += std::to_string(min) + ":";
    if (sec < 10)
        out += "0";
    out += std::to_string(sec);
    ((Line *)_content.at("Uptime"))->setContent("Uptime : " + out);
}