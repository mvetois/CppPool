/*
** EPITECH PROJECT, 2019
** exec
** File description:
** Network.cpp
*/
#include <fstream>
#include <sstream>
#include <iostream>
#include <thread>
#include <list>
#include <chrono>
#include "../../include/Module/Network.hpp"
#include "../../include/Display/Line.hpp"
#include "../../include/Display/ProgressBar.hpp"

static void getNetwork(std::list<std::string> *list)
{
    std::string line;
    std::ifstream file("/proc/net/dev");
    int	max = 0;
    int	a = 0;
    int	i = 0;
    bool find = false;
    std::string	temp;
    if (!file.is_open()) {
        list->push_back("0");
        list->push_back("0");
        return;
    }
    while (std::getline(file, line)) {
        if ((a = line.find(":")) != -1 && !line.find("wlp3s0")) {
            find = true;
            a++;
            while (line[a] == ' ')
                a++;
            while (line[a] != ' ') {
                temp += line[a];
                a++;
            }
            if (std::stoi(temp) > max) {
                list->push_back(temp);
                temp.erase();
                while (i != 7) {
                    while (line[a] == ' ')
                        a++;
                    while (line[a] != ' ')
                        a++;
                    i++;
                }
                i = 0;
                while (line[a] == ' ')
                    a++;
                while (line[a] != ' ') {
                    temp += line[a];
                    a++;
                }
                list->push_back(temp);

            }
        }
        temp.erase();
    }
    if (find == false) {
        list->push_back("0");
        list->push_back("0");
    }
}

Network::Network(IMonitorDisplay &monitorDisplay, double width, double height)
: Module(monitorDisplay, width, height, "Network")
{
        getNetwork(&_ref);
}

void Network::initializeDrawable()
{
    addDrawable("Network-up", new Line(_monitorDisplay), sf::FloatRect(0, 0, 0, 0));
    addDrawable("Network-down", new Line(_monitorDisplay), sf::FloatRect(0, 25, 0, 0));
}

void Network::updateThis()
{
    std::list<std::string> tmp;
    std::list<std::string> one;

    getNetwork(&one);
    tmp = one;
    ((Line *)_content.at("Network-up"))->setContent("Upload : " + std::to_string((std::stof(one.front()) - std::stof(_ref.front())) / 100) + " Mb/S");
    one.pop_front();
    _ref.pop_front();
    ((Line *)_content.at("Network-down"))->setContent("Download : " + std::to_string((std::stof(one.front()) - std::stof(_ref.front())) / 100) + " Mb/S");
    _ref = tmp;
    tmp.clear();
}