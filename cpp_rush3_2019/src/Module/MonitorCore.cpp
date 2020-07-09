/*
** EPITECH PROJECT, 2019
** exec
** File description:
** MonitorCore.cpp
*/


#include "../../include/Module/MonitorCore.hpp"
#include "../../include/Display/ProgressBar.hpp"

size_t GetIdleTime(const CPUData & e)
{
    return  e.times[S_IDLE] +
            e.times[S_IOWAIT];
}

size_t GetActiveTime(const CPUData & e)
{
    return  e.times[S_USER] +
            e.times[S_NICE] +
            e.times[S_SYSTEM] +
            e.times[S_IRQ] +
            e.times[S_SOFTIRQ] +
            e.times[S_STEAL] +
            e.times[S_GUEST] +
            e.times[S_GUEST_NICE];
}

static void ReadStatsCPU(std::vector<CPUData> & entries)
{
    std::ifstream fileStat("/proc/stat");
    std::string line;
    const std::string STR_CPU("cpu");
    const std::size_t LEN_STR_CPU = STR_CPU.size();
    const std::string STR_TOT("tot");

    while(std::getline(fileStat, line)) {
        if (!line.compare(0, LEN_STR_CPU, STR_CPU)) {
            std::istringstream ss(line);
            entries.emplace_back(CPUData());
            CPUData & entry = entries.back();
            ss >> entry.cpu;
            if (entry.cpu.size() > LEN_STR_CPU)
                entry.cpu.erase(0, LEN_STR_CPU);
            else
                entry.cpu = STR_TOT;
            for(int i = 0; i < 10; ++i)
                ss >> entry.times[i];
        }
    }
}

MonitorCore::MonitorCore(IMonitorDisplay &monitorDisplay, double width, double height)
: Module(monitorDisplay, width, height, "Monitor Core")
{}

void MonitorCore::initializeDrawable()
{
    std::vector<CPUData> ent1;
    ReadStatsCPU(ent1);

    Module::initializeDrawable();
    for (int i = 0; i < ent1.size(); i++) {
        std::string name = "Core ";
        name += std::to_string(i);
        addDrawable(name, new ProgressBar(_monitorDisplay), sf::FloatRect(515, 50 * i + 110, 200, 50));
    }
    addDrawable("cpu-usage", new ProgressBar(_monitorDisplay), sf::FloatRect(515, 55, 200, 50));
}

void MonitorCore::updateThis()
{
    std::vector<CPUData> ent1;
    std::vector<CPUData> ent2;
    double count = 0;
    ReadStatsCPU(ent1);
    std::this_thread::sleep_for(std::chrono::milliseconds(250));
    ReadStatsCPU(ent2);
    for (int i = 0; i < ent1.size(); i++) {
        std::string name = "Core ";
        name += std::to_string(i);
        const CPUData &e1 = ent1[i];
        const CPUData &e2 = ent2[i];
        const float ACTIVE_TIME	= static_cast<float>(GetActiveTime(e2) - GetActiveTime(e1));
        const float IDLE_TIME	= static_cast<float>(GetIdleTime(e2) - GetIdleTime(e1));
        const float TOTAL_TIME	= ACTIVE_TIME + IDLE_TIME;
        count += (100.f * ACTIVE_TIME / TOTAL_TIME);
        ((ProgressBar *)_content.at(name))->setContent((100.f * ACTIVE_TIME / TOTAL_TIME));
        ((ProgressBar *)_content.at(name))->setMax(100);
        ((ProgressBar *)_content.at(name))->setUnits("%");
        ((ProgressBar *)_content.at(name))->setName(name);
    }
    ((ProgressBar *)_content.at("cpu-usage"))->setContent(count / ent1.size());
    ((ProgressBar *)_content.at("cpu-usage"))->setMax(100);
    ((ProgressBar *)_content.at("cpu-usage"))->setUnits("%");
    ((ProgressBar *)_content.at("cpu-usage"))->setName("CPU Usage");

}