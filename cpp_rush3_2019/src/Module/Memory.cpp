/*
** EPITECH PROJECT, 2019
** exec
** File description:
** Memory.cpp
*/
#include <fstream>
#include <sstream>
#include <iostream>
#include "../../include/Module/Memory.hpp"
#include "../../include/Display/Line.hpp"
#include "../../include/Display/ProgressBar.hpp"

Memory::Memory(IMonitorDisplay &monitorDisplay, double width, double height)
: Module(monitorDisplay, width, height, "Memory")
{}

void Memory::initializeDrawable()
{
    Module::initializeDrawable();
    addDrawable("Memory-usage", new ProgressBar(_monitorDisplay), sf::FloatRect(515, 0, 200, 50));
}

void Memory::updateThis()
{
    std::ifstream fileStat("/proc/meminfo");

    std::string line;
    std::string available;
    std::string total;
    const std::string ava = "MemAvailable";
    const std::string tot = "MemTotal";
    while(std::getline(fileStat, line)) {
        if (!line.compare(0, ava.size(), ava)) {
            line.erase(0, line.find(" "));
            while (line[0] == ' ') {
                line.erase(0, 1);
            }
            for (int i = 0; line[i] != ' '; i++) {
                available += line[i];
            }
        }
        if (!line.compare(0, tot.size(), tot)) {
            line.erase(0, line.find(" "));
            while (line[0] == ' ') {
                line.erase(0, 1);
            }
            for (int i = 0; line[i] != ' '; i++) {
                total += line[i];
            }
        }
    }
    ((ProgressBar *)_content.at("Memory-usage"))->setContent(std::stoi(total) - std::stoi(available));
    ((ProgressBar *)_content.at("Memory-usage"))->setMax(std::stoi(total));
    ((ProgressBar *)_content.at("Memory-usage"))->setUnits("kB");
    ((ProgressBar *)_content.at("Memory-usage"))->setName("Memory");

}