/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** main
*/

#include <iostream>
#include <string.h>
#include "../include/Display/Sfml.hpp"
#include "../include/Core.hpp"

int main(int argc, char **argv)
{
	Core core;

	if (argc == 2) {
		if (!strcmp(argv[1], "sfml"))
			core.startCore(IMonitorDisplay::SFML);
		else if (!strcmp(argv[1], "NCURSES"))
			core.startCore(IMonitorDisplay::NCURSES);
		else
			std::cout << "Invalid argument" << std::endl;
	}
	else if (argc < 2)
		std::cout << "Missing argument" << std::endl;
	else
		std::cout << "To much argument" << std::endl;
	return 0;
}